#include "GameLayer.h"
#include "cocos2d.h"

USING_NS_CC;

bool GameLayer::init()
{
	if (!Layer::init())
	{
		return false;
	}
	Size visibleSize = Director::getInstance()->getVisibleSize();
	// ①创建缓存，将图片读取进来
	SpriteFrameCache * cache = SpriteFrameCache::sharedSpriteFrameCache();
	cache->addSpriteFramesWithFile("JingKe.plist");

	// ②创建第一帧，设置位置，加入到当前场景
	Sprite *sp = Sprite::createWithSpriteFrameName("JingKe_01.png");
	sp->setPosition(Point(visibleSize.width / 3, visibleSize.height / 2));
	this->addChild(sp);

	// ③创建集合，存每一张图片
	Vector< SpriteFrame* > sfme = Vector< SpriteFrame* >::Vector();
	char str[20] = { 0 };
	for (int i = 1; i < 5; ++i)
	{
		// ④ 获取图片名字，加入到集合中
		sprintf(str, "JingKe_%02d.png", i);
		SpriteFrame *fname = cache->spriteFrameByName(str);
		sfme.pushBack(fname);
	}
	// ⑤ 创建动画，设置播放速度
	Animation *animation = Animation::createWithSpriteFrames(sfme, 0.2f);
	sp->runAction(RepeatForever::create(Animate::create(animation)));
	return true;


}