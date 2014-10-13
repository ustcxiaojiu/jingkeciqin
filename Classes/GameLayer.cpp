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
	// �ٴ������棬��ͼƬ��ȡ����
	SpriteFrameCache * cache = SpriteFrameCache::sharedSpriteFrameCache();
	cache->addSpriteFramesWithFile("JingKe.plist");

	// �ڴ�����һ֡������λ�ã����뵽��ǰ����
	Sprite *sp = Sprite::createWithSpriteFrameName("JingKe_01.png");
	sp->setPosition(Point(visibleSize.width / 3, visibleSize.height / 2));
	this->addChild(sp);

	// �۴������ϣ���ÿһ��ͼƬ
	Vector< SpriteFrame* > sfme = Vector< SpriteFrame* >::Vector();
	char str[20] = { 0 };
	for (int i = 1; i < 5; ++i)
	{
		// �� ��ȡͼƬ���֣����뵽������
		sprintf(str, "JingKe_%02d.png", i);
		SpriteFrame *fname = cache->spriteFrameByName(str);
		sfme.pushBack(fname);
	}
	// �� �������������ò����ٶ�
	Animation *animation = Animation::createWithSpriteFrames(sfme, 0.2f);
	sp->runAction(RepeatForever::create(Animate::create(animation)));
	return true;


}