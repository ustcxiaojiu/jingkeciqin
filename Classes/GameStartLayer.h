#pragma once

#include "cocos2d.h"

class GameStartLayer:public cocos2d::Layer
{
public:
	virtual bool init();

	CREATE_FUNC(GameStartLayer);

	void newGameCallback(cocos2d::Ref* pSender);

};