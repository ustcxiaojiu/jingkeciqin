#pragma once

#include <cocos2d.h>


typedef enum {
	GAME_START_SCENE=0,
	GAME_SCENE = 1,
	GAME_OVER_SCENE = 2,
}SceneType;


class SceneManager
{
public:
	SceneManager(){};
	~SceneManager(){};

	static SceneManager* getInstance();

	void showScene(SceneType sceneType);

};