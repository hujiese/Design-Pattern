#pragma once
#include "MediaPlayer.h"
#include "AdvancedMediaPlayer.h"
#include "VlcPlayer.h"
#include "Mp4Player.h"
#include "MediaAdapter.h"
using namespace std;

class AudioPlayer :
	public MediaPlayer
{
public:
	AudioPlayer();
	void play(string audioType, string fileName);
	virtual ~AudioPlayer();

protected:
	MediaAdapter* mediaAdapter;
};

