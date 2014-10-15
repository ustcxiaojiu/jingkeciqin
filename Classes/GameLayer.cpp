#include "GameLayer.h"
#include "BaseSprite.h"
#include "Hero.h"

#include "cocos2d.h"

USING_NS_CC;

GameLayer::GameLayer()

:m_pHero(NULL),
m_pTiledMap(NULL),
m_pSpriteNodes(NULL)
{

}

GameLayer::~GameLayer()
{
	this->unscheduleUpdate();
	
}
bool GameLayer::init()
{
	if (!Layer::init())
	{
		return false;
	}
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 originSize = Director::getInstance()->getVisibleOrigin();
	 
	// m_pTiledMap = TMXTiledMap::create("home.tmx");
 	// this->addChild(m_pTiledMap);

	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("JINGKE.plist");
	m_pSpriteNodes = SpriteBatchNode::create("JINGKE.pvr.ccz");
	this->addChild(m_pSpriteNodes);

	
	m_pHero = Hero::create();
	m_pHero->setPosition(originSize + Point(400, 400));
	m_pSpriteNodes->addChild(m_pHero);
	//this->addChild(m_pHero);
	//m_pHero->runIdleAction();
	
	
	
	
	return true;
	

}