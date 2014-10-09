#pragma once 

#include "cocos2d.h"

class GameStartScene:public cocos2d::LayerColor
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(GameStartScene);
};