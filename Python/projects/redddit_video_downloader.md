


### code

```python
import requests
import os

def redittDownload(URL=""):
    inurl = input("Enter reddit video url : ")

    url = inurl[:-1]+".json"
    r = requests.get(url, headers={
                     "User-agent": "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/99.0.4844.74 Safari/537.36"})
    data = r.json()[0]
    video_url = data["data"]['children'][0]['data']['secure_media']['reddit_video']['fallback_url']
    audio_url = "https://v.redd.it/"+video_url.split("/")[3]+"/DASH_audio.mp4"
    with open("video.mp4", "wb") as f:
        g = requests.get(video_url, stream=True)
        f.write(g.content)
    with open("audio.mp3", "wb") as f:
        g = requests.get(audio_url, stream=True)
        f.write(g.content)
    os.system("ffmpeg -i video.mp4 -i audio.mp3 -c copy output.mp4")


if __name__ == "__main__":
    redittDownload()


```


