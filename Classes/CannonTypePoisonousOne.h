﻿#pragma once

#include "cocos2d.h"
#include "Enemy.h"
#include "Cannon.h"

class CannonTypePoisonousOne : public Cannon
{
public:

	//初始化
	virtual bool init();  

	//create函数
	CREATE_FUNC(CannonTypePoisonousOne);


	void pause();
	void resume();


private:
	
	void attackOnce();

	cocos2d::Sprite* _piston;

	void setDirection();

	//bool _canRotate;

};



