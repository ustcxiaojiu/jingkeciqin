#pragma once
#include "cocos2d.h"


class BaseSprite;
class Hero;
class GameLayer :public cocos2d::Layer
{
public:
	GameLayer();
	~GameLayer();
	virtual bool init();
	CC_SYNTHESIZE_READONLY(Hero*, m_pHero, Hero);
	cocos2d::SpriteBatchNode *m_pSpriteNodes;
	CREATE_FUNC(GameLayer);
	
private:
	cocos2d::TMXTiledMap *m_pTiledMap;
};