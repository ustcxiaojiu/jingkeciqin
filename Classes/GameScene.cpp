#include "GameScene.h"
#include "GameLayer.h"
#include "cocos2d.h"

USING_NS_CC;

Scene* GameScene::createScene()
{
	auto scene = Scene::create();

	auto layer = GameLayer::create();

	scene->addChild(layer);
	return scene;
}


