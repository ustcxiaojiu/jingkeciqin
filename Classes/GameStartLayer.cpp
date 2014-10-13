#include "GameStartLayer.h"
#include "Scenemanager.h"

USING_NS_CC;

bool GameStartLayer::init()
{
	if (!Layer::init())
		{
			return false;
		}

		Size visiableSize = Director::getInstance()->getVisibleSize();

		auto startBackground = Sprite::create("StartBackground.png");//600*446
		startBackground->setAnchorPoint(Point::ZERO);
		//startBackground->setScaleX(0.8);//960/1200
		//startBackground->setScaleY(1.133);
		this->addChild(startBackground, 1);

		/*auto gameLogo = Sprite::create("GameLogo.png");
		gameLogo->setPosition(Point(visiableSize.width*0.5, visiableSize.height*0.8));
		this->addChild(gameLogo, 1);*/

		auto newGameItem = MenuItemImage::create("newGameItem.png", "newGameItemPressed.png",
										CC_CALLBACK_1(GameStartLayer::newGameCallback, this));

		newGameItem->setPosition(Point(visiableSize.width / 2+340, visiableSize.height / 2-75));

		auto continueGameItem = MenuItemImage::create("continueGameItem.png", "continueGameItemPressed.png",
			CC_CALLBACK_1(GameStartLayer::newGameCallback, this));

		continueGameItem->setPosition(Point(visiableSize.width / 2+340, visiableSize.height / 2 - 170));

		auto newGameMenu = Menu::create(newGameItem, continueGameItem, NULL);
		newGameMenu->setPosition(Point::ZERO);

		this->addChild(newGameMenu, 1);

		return true;

	}




void GameStartLayer::newGameCallback(cocos2d::Ref* pSender)
{
	//log("<<<<<<<<<<<");
	SceneManager::getInstance()->showScene(GAME_SCENE);

}
