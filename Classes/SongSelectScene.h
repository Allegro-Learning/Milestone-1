#ifndef __SONG_SELECT_SCENE_H__
#define __SONG_SELECT_SCENE_H__

#include "cocos2d.h"

class SongSelectScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    void songSelectCallback(cocos2d::Ref* pSender);
    
    CREATE_FUNC(SongSelectScene);
};

#endif // __SONG_SELECT_SCENE_H__
