#include "MediaAdapter.h"


MediaAdapter::MediaAdapter()
{
}

MediaAdapter::MediaAdapter(string audioType)
{
	if (audioType == "vlc"){
		advancedMusicPlayer = new VlcPlayer();
	}
	else if (audioType == "mp4"){
		advancedMusicPlayer = new Mp4Player();
	}
}

void MediaAdapter::play(string audioType, string fileName)
{
	if (audioType == "vlc"){
		advancedMusicPlayer->playVlc(fileName);
	}
	else if (audioType == "mp4"){
		advancedMusicPlayer->playMp4(fileName);
	}
}

MediaAdapter::~MediaAdapter()
{
	if (advancedMusicPlayer != NULL)
	{
		delete advancedMusicPlayer;
		advancedMusicPlayer = NULL;
	}
}
