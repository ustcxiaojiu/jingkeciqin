#include "JKCQ.h"
#include "cocos2d.h"

USING_NS_CC;

Scene* JKCQ::createScene()
{
	auto scene = Scene::create();

	auto layer = JKCQ::create();

	scene->addChild(layer);
	return scene;
}


bool JKCQ::init()
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