#include "GameStartScene.h"

USING_NS_CC;

Scene* GameStartScene::createScene()
{
	auto startScene = Scene::create();
	auto startLayer = GameStartScene::create();
	startScene->addChild(startLayer);
	return startScene;

}

bool GameStartScene::init()
{
	if (!LayerColor::initWithColor(Color4B(255, 255, 255, 255),480, 320))
	{
		return false;
	}
	Size visiableSize = Director::getInstance()->getVisibleSize();



	auto bgColor = LayerColor::create();	
	bgColor->setPosition(Point(visiableSize.width/2, visiableSize.height/2));
	this->addChild(bgColor,0);

	auto startBackground = Sprite::create("StartBackground.png");
	startBackground->setPosition(Point(visiableSize.width / 2, visiableSize.height/2));
	this->addChild(startBackground,1);

	auto gameLogo = Sprite::create("GameLogo.png");
	gameLogo->setPosition(Point(visiableSize.width/2,visiableSize.height*0.8));
	this->addChild(gameLogo, 1);


	return true;

}

