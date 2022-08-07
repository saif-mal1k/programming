
### code 
```python
from matplotlib.pyplot import savefig
from pytube import YouTube
from pytube import Playlist
from pytube import Channel
import os
import re
import subprocess
import ffmpeg

from cleantext import clean


def input_url(URL='https://www.youtube.com/watch?v=DYzT-Pk6Ogw'):
    yt = YouTube(URL)
    title = yt.title
    print(f'to Download : {title}')
    return yt, title


def get_itag(yt=None):
    tag_audio = list(yt.streams.filter(only_audio=True))
    tag_video = list(yt.streams.filter(file_extension='mp4'))

    audio_itag = {}
    video_itag = {}
    video_itag_nosound = {}
    all_res = []

    i = 1
    for stream in tag_audio:
        stream = f'{stream}'
        stream = stream.split(' ')
        itag, abr = stream[1], stream[3]
        itag_num = itag.split('"')[1]
        abr_num = abr.split('"')[1]

        audio_itag[i] = {abr_num: itag_num}
        i += 1

    j = 1
    for stream in tag_video:
        stream = f'{stream}'
        stream = stream.split(' ')
        itag, res, fps, pro = stream[1], stream[3], stream[4], stream[-2]

        if 'True' in pro:
            if 'res' in res:
                itag_num = itag.split('"')[1]
                res_num = res.split('"')[1]
                fps_num = fps.split('"')[1]

                video_itag[j] = {f'{res_num}-{fps_num}': itag_num}
                j += 1

        else:
            if 'res' in res:
                if res not in all_res:
                    all_res.append(res)

                    itag_num = itag.split('"')[1]
                    res_num = res.split('"')[1]
                    fps_num = fps.split('"')[1]

                    video_itag_nosound[j] = {
                        f'no-sound-{res_num}-{fps_num}': itag_num}
                    j += 1

    return audio_itag, video_itag, video_itag_nosound


def show_choice_audio_only(audio_itag=None):
    target = 'audio only'
    print(f'> choice of {target}')
    for index in range(len(audio_itag)):
        for abr, itag in audio_itag[index+1].items():
            print(f' {index+1}. abr = {abr}')


def show_choice_video(video_itag=None, video_itag_nosound=None):
    target = 'videos'
    print(f'> choice of {target}')

    for index in range(len(video_itag)):
        for res_fps, itag in video_itag[index+1].items():
            print(f' {index+1}. res = {res_fps}')

    for index in range(len(video_itag_nosound)):
        for res_fps, itag in video_itag_nosound[index+len(video_itag)+1].items():
            print(f' {index+1+len(video_itag)}. res = {res_fps}')


def create_dir(folder_name='YT_video_projects', projectName=''):
    desktop = os.path.join(os.path.join(os.environ['USERPROFILE']), 'Desktop')
    PATH = f'{desktop}\\{folder_name}\\{projectName}'
    os.makedirs(PATH, exist_ok=True)
    return PATH


def download_by_itag(PATH, itag=None, type='mp4', yt=None, title=None):
    stream = yt.streams.get_by_itag(itag)
    stream.download(PATH, f'{title}.{type}')


def clean_path(title):
    title = clean(title, no_emoji=True)
    save_title = str(title)
    to_replace = {'/': '', ':': '', '*': '',
                  '?': '', '"': '', '<': '', '>': '', '|': ''}
    save_title = re.sub(
        r'[\/:*?"<>|]', lambda x: to_replace[x.group(0)], save_title)
    return save_title


def SearchVideo(title):
    print("Searching on youtube...")
    from youtubesearchpython import VideosSearch
    videosSearch = VideosSearch(title, limit=1)
    results = videosSearch.result()['result']
    print("Finished searching!")
    URL = 'https://www.youtube.com/watch?v=' + results[0]['id']
    return URL


def single_video_download(ipString=None, folderToUse="C:\\Users\\HP\\Desktop\\ToUpload"):
    if ipString.startswith('https://www.youtube.com/watch?v='):
        URL = ipString
    else:
        URL = SearchVideo(ipString)
    '''
    download a single video from youtube URL
    '''

    yt, title = input_url(URL)

    audio_itag, video_itag, video_itag_nosound = get_itag(yt)

    type = input('what do you want ?\n 1. audio only\n 2. video\n :')

    save_title = clean_path(title)

    if type == '1':
        print('\nwhich quality you want? (select only one)')
        show_choice_audio_only(audio_itag)
        qt = int(input(' :'))

        itag = int(list(audio_itag[qt].values())[0])

        PATH = f'{folderToUse}'
        os.makedirs(PATH, exist_ok=True)
        print(f'\ndownloading.. {title}')

        download_by_itag(PATH, itag, 'mp3', yt, save_title)
        print(
            f'download {title} successfully!! check in "{PATH}" ')

    else:
        print('\nwhich quality you want?')
        show_choice_video(video_itag, video_itag_nosound)
        qt = int(input(' :'))

        if qt <= len(video_itag):
            itag = int(list(video_itag[qt].values())[0])
        else:
            itag = int(list(video_itag_nosound[qt].values())[0])

        PATH = f'{folderToUse}'
        print(f'\ndownloading.. {title}')
        download_by_itag(PATH, itag, 'mp4', yt, save_title)
        print(
            f'download {title} successfully!! check in "{PATH}" ')

    return PATH, save_title


def multi_video_download(URL="https://www.youtube.com/channel/UCsBjURrPoezykLs9EqgamOA", num_videos=2, recenly=True):
    '''
    using URL from the playlist or Channel to download videos
    : if using URL from playlist recenly=True mean from the top to bottom
    : if using URl from Channel recenly=True mean recenly videos
    '''
    URLs = []

    try:
        p = Playlist(URL)
        print(f'!Download from {p.title}')
        folder_name = p.title

        if recenly:
            for URL in p.video_urls[:num_videos]:
                URLs.append(URL)
        else:
            for URL in p.video_urls:
                URLs.append(URL)
            URLs = URLs[::-1]
            URLs = URLs[:num_videos]

    except:
        c = Channel(URL)
        print(f'!Download from {c.channel_name}')
        folder_name = c.channel_name

        if recenly:
            for URL in c.video_urls[:num_videos]:
                URLs.append(URL)
        else:
            for URL in c.video_urls:
                URLs.append(URL)
            URLs = URLs[::-1]
            URLs = URLs[:num_videos]

    type = input('what do you want ?\n 1. audio only\n 2. video\n :')
    folder_name = clean_path(folder_name)
    PATH = create_dir(folder_name)

    if type == '1':
        for URL in URLs:
            yt, title = input_url(URL)
            title = clean_path(title)
            stream = yt.streams.get_audio_only()
            stream.download(PATH, f'{title}.mp3')
            print(
                f'download {title} successful!! check in folder Youtube_download on your Desktop\n')

    else:
        qt = input('low or high resolution ?\n 1. low\n 2. high\n :')
        if qt == '1':
            for URL in URLs:
                yt, title = input_url(URL)
                title = clean_path(title)
                stream = yt.streams.get_lowest_resolution()
                stream.download(PATH, f'{title}.mp4')
                print(
                    f'download {title} successfully!! check in folder Youtube_download on your Desktop\n')
        else:
            for URL in URLs:
                yt, title = input_url(URL)
                title = clean_path(title)
                stream = yt.streams.get_highest_resolution()
                stream.download(PATH, f'{title}.mp4')
                print(
                    f'download {title} successfully!! check in folder Youtube_download on your Desktop\n')

    print(f'!!Download all files from {folder_name} sucessfully')


def choose720pVideo(video_itag=None):
    print(f'> chosen video resolution')

    for index in range(len(video_itag)):
        for res_fps, itag in video_itag[index+1].items():
            if '720p' in res_fps:
                print(f'   res = {res_fps}')
                return itag


def download720pVideo(ipString=None, folderToUse="C:\\Users\\HP\\Desktop\\ToUpload"):
    if ipString.startswith('https://www.youtube.com'):
        URL = ipString
    else:
        URL = SearchVideo(ipString)
    '''
    download a single video from youtube URL
    '''

    yt, title = input_url(URL)

    audio_itag, video_itag, video_itag_nosound = get_itag(yt)

    video_title = clean_path(title)

    save_title = URL
    save_title = save_title.replace('https://www.youtube.com/watch?v=', '')
    save_title = save_title.replace('https://www.youtube.com/shorts/', '')
    save_title = save_title.replace('\n', '')
    save_title = clean_path(save_title)

    itag720p = choose720pVideo(video_itag)

    PATH = folderToUse
    print(f'\ndownloading.. {title}')
    download_by_itag(PATH, itag720p, 'mp4', yt, save_title)
    print(
        f'download {title} successfully!! check in "{PATH}" ')

    return PATH+"\\"+save_title+".mp4", video_title


def choose1080pVideo(video_itag=None, video_itag_nosound=None):
    print(f'> chosen video resolution')

    selected = "Null"

    for index in range(len(video_itag_nosound)):
        for res_fps, itag in video_itag_nosound[index+len(video_itag)+1].items():
            if 'no-sound-1080p' in res_fps:
                print(f'   res = {res_fps}')

                selected = itag

    if selected == "Null":
        selected = choose720pVideo(video_itag)

    return selected


def choose160kbpsAudio(audio_itag=None):
    print(f'> chosen audio resolution')

    for index in range(len(audio_itag)):
        for abr, itag in audio_itag[index+1].items():
            if '160kbps' in abr:
                print(f' {index+1}. abr = {abr}')
                return itag


def download1080pVideo(ipString=None, folderToUse="C:\\Users\\HP\\Desktop\\ToUpload"):
    if ipString.startswith('https://www.youtube.com'):
        URL = ipString
    else:
        URL = SearchVideo(ipString)
    '''
    download a single video from youtube URL
    '''

    yt, title = input_url(URL)

    audio_itag, video_itag, video_itag_nosound = get_itag(yt)

    video_title = clean_path(title)

    save_title = URL
    save_title = save_title.replace('https://www.youtube.com/watch?v=', '')
    save_title = save_title.replace('https://www.youtube.com/shorts/', '')
    save_title = save_title.replace('\n', '')

    # download Audio
    itag160kbps = choose160kbpsAudio(audio_itag)
    PATH = folderToUse
    print(f'\ndownloading.. {title}')
    download_by_itag(PATH, itag160kbps, 'mp3', yt, save_title)
    print(
        f'downloaded {title} successfully!! check in "{PATH}" on your Desktop')

    # download video
    itag1080p = choose1080pVideo(video_itag, video_itag_nosound)

    PATH = folderToUse
    print(f'\ndownloading.. {title}')
    download_by_itag(PATH, itag1080p, 'mp4', yt, save_title)
    print(
        f'downloaded {title} successfully!! check in "{PATH}" ')

    PATH_to_downloaded_video = PATH+"\\"+save_title+".mp4"
    PATH_to_downloaded_Audio = PATH+"\\"+save_title+".mp3"
    PATH_to_flipped_video = PATH+"\\"+save_title+"_flipped.mp4"

    # flip video horizontally
    if os.path.exists(PATH_to_flipped_video):
        os.remove(PATH_to_flipped_video)
    # input downloaded video
    stream = ffmpeg.input(PATH_to_downloaded_video)
    stream = ffmpeg.hflip(stream)
    stream = ffmpeg.output(stream, PATH_to_flipped_video)
    ffmpeg.run(stream)

    PATH_to_final_video = PATH+"\\"+save_title+"1080"+".mp4"

    # delete this file if exist "PATH+"\\"+save_title+"1080"+".mkv""
    if os.path.exists(PATH_to_final_video):
        os.remove(PATH_to_final_video)

    # add music to flipped video
    cmd = "ffmpeg -i "+PATH_to_flipped_video+" -i "+PATH_to_downloaded_Audio + \
        " -map 0:v -map 1:a -c:v copy -shortest "+PATH_to_final_video
    subprocess.run(cmd)

    #remove flipped file and downloaded audio and video
    if os.path.exists(PATH_to_downloaded_video):
        os.remove(PATH_to_downloaded_video)

    if os.path.exists(PATH_to_downloaded_Audio):
        os.remove(PATH_to_downloaded_Audio)

    if os.path.exists(PATH_to_flipped_video):
        os.remove(PATH_to_flipped_video)

    return PATH_to_final_video, video_title


def download160kbpsAudio(ipString=None, folderToUse="C:\\Users\\HP\\Desktop\\ToUpload"):
    if ipString.startswith('https://www.youtube.com'):
        URL = ipString
    else:
        URL = SearchVideo(ipString)
    '''
    download a single Audio from youtube URL
    '''

    yt, title = input_url(URL)

    audio_itag, video_itag, video_itag_nosound = get_itag(yt)

    save_title = URL
    save_title = save_title.replace('https://www.youtube.com/watch?v=', '')
    save_title = save_title.replace('https://www.youtube.com/shorts/', '')
    save_title = save_title.replace('\n', '')

    # download Audio
    itag160kbps = choose160kbpsAudio(audio_itag)
    PATH = folderToUse
    print(f'\ndownloading.. {title}')
    download_by_itag(PATH, itag160kbps, 'mp3', yt, save_title)
    print(f'downloaded {title} successfully!! check in "{PATH}" on your Desktop')

    return PATH, save_title



if __name__ == '__main__':

    PATH = create_dir(folder_name='YT_video_projects', projectName='')

    AudioToDownload = input("enter url or title of video:")

    # download Audio from youtube
    #PATH, yt_title = download160kbpsAudio(AudioToDownload, PATH)

    # download video from youtube
    #PATH, yt_title = download1080pVideo(videoToDownload, PATH)

    #print("downloaded video_title: ", yt_title, "at location: ", PATH)

```

