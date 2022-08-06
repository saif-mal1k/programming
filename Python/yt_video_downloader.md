### images

![image](https://user-images.githubusercontent.com/63545175/183248806-655a489c-3cb2-4633-9878-00a8e7b2169f.png)






<br/>


### code

```python
from pytube import YouTube
from pytube import Playlist
from pytube import Channel
import os
import re

def input_url(URL = 'https://www.youtube.com/watch?v=o_v9MY_FMcw'):
    yt = YouTube(URL)
    title = yt.title
    print(f'!Download : "{title}"')
    return yt, title

def get_itag(yt=None) :
    tag_audio = list(yt.streams.filter(only_audio=True))
    tag_video = list(yt.streams.filter(file_extension='mp4'))

    audio_itag = {}
    video_itag = {}
    video_itag_nosound = {}
    all_res = []

    i = 1
    for stream in tag_audio :
        stream = f'{stream}'
        stream = stream.split(' ')
        itag, abr = stream[1], stream[3]
        itag_num = itag.split('"')[1]
        abr_num = abr.split('"')[1]
        
        audio_itag[i] = {abr_num:itag_num}
        i+=1

    j = 1
    for stream in tag_video :
        stream = f'{stream}'
        stream = stream.split(' ')
        itag, res, fps, pro = stream[1], stream[3], stream[4], stream[-2]

        if 'True' in pro:
            if 'res' in res :
                itag_num = itag.split('"')[1]
                res_num = res.split('"')[1]
                fps_num = fps.split('"')[1]
                
                video_itag[j] = {f'{res_num}-{fps_num}':itag_num}
                j+=1
        
        else :
            if 'res' in res :
                if res not in all_res :
                    all_res.append(res)

                    itag_num = itag.split('"')[1]
                    res_num = res.split('"')[1]
                    fps_num = fps.split('"')[1]

                    video_itag_nosound[j] = {f'no-sound-{res_num}-{fps_num}':itag_num}
                    j+=1

    return audio_itag , video_itag, video_itag_nosound

def show_choice_audio_only(audio_itag=None):
    target = 'audio only'
    print(f'> choice of {target}')
    for index in range(len(audio_itag)):
        for abr, itag in audio_itag[index+1].items() :
            print(f' {index+1}. abr = {abr}')

def show_choice_video(video_itag=None, video_itag_nosound=None):
    target = 'videos'
    print(f'> choice of {target}')

    for index in range(len(video_itag)):
        for res_fps, itag in video_itag[index+1].items() :
            print(f' {index+1}. res = {res_fps}')
        
    for index in range(len(video_itag_nosound)):
        for res_fps, itag in video_itag_nosound[index+len(video_itag)+1].items() :
            print(f' {index+1+len(video_itag)}. res = {res_fps}')

def create_dir(specific=''):
    folder_name = 'Youtube_Downloads'
    desktop = os.path.join(os.path.join(os.environ['USERPROFILE']), 'Desktop') 
    PATH = f'{desktop}\\{folder_name}\\{specific}'
    os.makedirs(PATH, exist_ok = True)
    return PATH

def download_by_itag(PATH,itag=None,type='mp4',yt=None,title=None):
    stream = yt.streams.get_by_itag(itag)
    stream.download(PATH,f'{title}.{type}')

def clean_path(title):
    save_title = str(title)
    to_replace = {'/':'',':':'','*':'','?':'','"':'','<':'','>':'','|':''}
    save_title = re.sub(r'[\/:*?"<>|]', lambda x:to_replace[x.group(0)],save_title)
    return save_title


def SearchVideo(title):
    print("Searching for videos...")
    from youtubesearchpython import VideosSearch
    videosSearch = VideosSearch(title, limit=1)
    results = videosSearch.result()['result']
    print("Finished searching!")
    URL = 'https://www.youtube.com/watch?v=' + results[0]['id']
    return URL


def single_video_download(ipString=None):
    if ipString.startswith('https://www.youtube.com/watch?v='):
        URL = ipString
    else:
        URL = SearchVideo(ipString)
    '''
    download a single video from youtube URL
    '''
    
    yt, title = input_url(URL)

    audio_itag , video_itag, video_itag_nosound = get_itag(yt)
    
    type = input('what do you want ?\n 1. audio only\n 2. video\n :')

    save_title = clean_path(title) 
    
    if type == '1' :
        print('\nwhich quality you want? (select only one)')
        show_choice_audio_only(audio_itag)
        qt = int(input(' :'))
        
        itag = int(list(audio_itag[qt].values())[0])
        
        PATH = create_dir()
        print(f'\ndownloading... "{title}"')


        download_by_itag(PATH,itag,'mp3',yt,save_title)
        print(f'downloaded "{title}" successfully! check in "{PATH}"')
    
    else :
        print('\nwhich quality you want?')
        show_choice_video(video_itag,video_itag_nosound)
        qt = int(input(' :'))
        
        if qt <= len(video_itag):
            itag = int(list(video_itag[qt].values())[0])
        else:
            itag = int(list(video_itag_nosound[qt].values())[0])
        
        PATH = create_dir()
        print(f'\ndownloading... {title}')
        download_by_itag(PATH,itag,'mp4',yt,save_title)
        print(f'downloaded "{title}" successfully! check in folder "{PATH}"')
        

def multi_video_download(URL=None,num_videos=0,recenly=True):
    '''
    using URL from the playlist or Channel to download videos
    : if using URL from playlist recenly=True mean from the top to bottom
    : if using URl from Channel recenly=True mean recenly videos
    '''
    URLs = []
    
    try :
        p = Playlist(URL)
        print(f'!Download from {p.title}')
        folder_name = p.title

        if recenly :
            for URL in p.video_urls[:num_videos]:
                URLs.append(URL) 
        else :
            for URL in p.video_urls:
                URLs.append(URL)
            URLs = URLs[::-1]
            URLs = URLs[:num_videos]
        
    except :
        c = Channel(URL)
        print(f'!Download from {c.channel_name}')
        folder_name = c.channel_name
        
        if recenly :
            for URL in c.video_urls[:num_videos]:
                URLs.append(URL) 
        else :
            for URL in c.video_urls:
                URLs.append(URL)
            URLs = URLs[::-1]
            URLs = URLs[:num_videos]

    type = input('what do you want ?\n 1. audio only\n 2. video\n :')
    folder_name = clean_path(folder_name)
    PATH = create_dir(folder_name)

    if type == '1':
        for URL in URLs :
            yt, title =input_url(URL)
            title = clean_path(title)
            stream = yt.streams.get_audio_only()
            stream.download(PATH,f'{title}.mp3')
            print(f'downloaded "{title}" successfully! check in folder "{PATH}" \n')
            
    else :
        qt = input('low or high resolution ?\n 1. low\n 2. high\n :')
        if qt == '1':
            for URL in URLs :
                yt, title =input_url(URL)
                title = clean_path(title)
                stream = yt.streams.get_lowest_resolution()
                stream.download(PATH,f'{title}.mp4')
                print(f'downloaded "{title}" successfully! check in folder "{PATH}" \n')
        else :
            for URL in URLs :
                yt, title =input_url(URL)
                title = clean_path(title)
                stream = yt.streams.get_highest_resolution()
                stream.download(PATH,f'{title}.mp4')
                print(f'downloaded "{title}" successfully! check in folder "{PATH}" \n')
    
    print(f'*** Downloaded all files from "{folder_name}" sucessfully ***')


if __name__ == '__main__':
    query = input('Enter title or url of video: ')
    single_video_download(query)
```

