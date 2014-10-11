#include "GameStartScene.h"
#include "GameStartLayer.h"

USING_NS_CC;

Scene* GameStartScene::createScene()
{
	auto startScene = Scene::create();
	auto startLayer = GameStartLayer::create();
	startScene->addChild(startLayer);
	return startScene;

}



