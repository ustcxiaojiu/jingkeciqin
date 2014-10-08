#include "GameScene.h"
#include "cocos2d.h"

USING_NS_CC;

Scene* GameScene::createScene()
{
	auto scene = Scene::create();

	auto layer = GameScene::create();

	scene->addChild(layer);
	return scene;
}


bool GameScene::init()
{
	if (!Layer::init())
	{
		return false;
	}

	Size winSize = Director::getInstance()->getVisibleSize();
	auto bg = Sprite::create("HelloWorld.png");
	bg->setPosition(Point(winSize.width / 2, winSize.height / 2));
	addChild(bg);
return true;
		

}