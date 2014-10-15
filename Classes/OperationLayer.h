#pragma once

#include "cocos2d.h"

class Hero;

class OperateLayer :public cocos2d::Layer
{
public:
	virtual bool init();
	CREATE_FUNC(OperateLayer);
	CC_SYNTHESIZE(Hero*, m_pHero, Hero);

	void onTouchesUp();
	void onTouchesDown();
	void onTouchesLeft();
	void onTouchesRight();
	void onTouchesMakeSure();



private:

};
