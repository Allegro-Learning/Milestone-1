
#ifndef __SONG_H__
#define __SONG_H__

#include "cocos2d.h"
#include "MidiReader.h"
#include "MidiSequencer.h"
#include "MidiStream.h"

class SongLevel {
public:
    struct Stats {
        int total_notes;
        int perfect;
        int good;
        int bad;
        int missed;
    };
private:
    MidiStream* inst_midi;
    MidiStream* song_midi;
    int song_audio_ID;
public:
    Stats stats;
    virtual bool init(MidiReader& instrument_midi, MidiSequencer& song_midi, int song_audio_ID);
    void start();
    void pause();
    bool completed();
    void update(float time);
    void draw(float time);
}

#endif