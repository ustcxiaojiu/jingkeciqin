#include "GameStartLayer.h"
#include "Scenemanager.h"

USING_NS_CC;

bool GameStartLayer::init()
{
	if (!LayerColor::init())
		{
			return false;
		}

		Size visiableSize = Director::getInstance()->getVisibleSize();

		auto bgColor = LayerColor::create(Color4B(255, 255, 255, 255), 960, 680);
		this->addChild(bgColor);

		auto startBackground = Sprite::create("StartBackground.png");//600*446
		startBackground->setAnchorPoint(Point::ZERO);
		startBackground->setScaleX(1.6f);//960/600
		this->addChild(startBackground, 1);

		auto gameLogo = Sprite::create("GameLogo.png");
		gameLogo->setPosition(Point(visiableSize.width*0.5, visiableSize.height*0.8));
		this->addChild(gameLogo, 1);

		auto newGameItem = MenuItemImage::create("newGameItem.png", "newGameItemPressed.png",
										CC_CALLBACK_1(GameStartLayer::newGameCallback, this));

		newGameItem->setPosition(Point(visiableSize.width / 2, visiableSize.height / 2));

		auto newGameMenu = Menu::create(newGameItem,NULL);
		newGameMenu->setPosition(Point::ZERO);

		this->addChild(newGameMenu, 1);




		return true;

	}




void GameStartLayer::newGameCallback(cocos2d::Ref* pSender)
{
	log("<<<<<<<<<<<");
	SceneManager::getInstance()->showScene(GAME_SCENE);

}
