#include "OperationLayer.h"
#include "BaseSprite.h"
#include "cocos2d.h"
#include "editor-support/cocostudio/CCSGUIReader.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "Hero.h"
#include "cocostudio/CocoStudio.h"
using namespace cocostudio;

USING_NS_CC;
using namespace cocos2d::ui;
using namespace cocostudio;

bool  OperateLayer::init()
{
	if (!Layer::init())
	{
		return false;
	}
	auto btnUI = cocostudio::GUIReader::getInstance()->widgetFromJsonFile("DirectBtn.ExportJson");
	
	this->addChild(btnUI);

	Button * upBtn = (Button*)Helper::seekWidgetByName(btnUI, "UpBtn");
	Button * downBtn = (Button*)Helper::seekWidgetByName(btnUI, "DownBtn");
	Button * leftBtn = (Button*)Helper::seekWidgetByName(btnUI, "LeftBtn");
	Button * rightBtn = (Button*)Helper::seekWidgetByName(btnUI, "RightBtn");
	Button * makeSure = (Button*)Helper::seekWidgetByName(btnUI, "MakeSure");
	
	upBtn->addTouchEventListener(CC_CALLBACK_0(OperateLayer::onTouchesUp,this));
	downBtn->addTouchEventListener(CC_CALLBACK_0(OperateLayer::onTouchesDown, this));
	leftBtn->addTouchEventListener(CC_CALLBACK_0(OperateLayer::onTouchesLeft, this));
	rightBtn->addTouchEventListener(CC_CALLBACK_0(OperateLayer::onTouchesRight, this));
	makeSure->addTouchEventListener(CC_CALLBACK_0(OperateLayer::onTouchesMakeSure, this));
	
	return true;

}

void OperateLayer::onTouchesUp()
{

	m_pHero->runUpAction();

}
void OperateLayer::onTouchesDown()
{

	m_pHero->runDownAction();

}
void OperateLayer::onTouchesLeft()
{

	m_pHero->runLeftAction();

}

void OperateLayer::onTouchesRight()
{

	m_pHero->runRightAction();

}

void OperateLayer::onTouchesMakeSure()
{

	m_pHero->runMakeSureAction();

}


