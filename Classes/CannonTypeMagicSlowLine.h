﻿#pragma once

#include "cocos2d.h"
#include "Enemy.h"
#include "Cannon.h"

class CannonTypeMagicSlowLine : public Cannon
{
public:

	//初始化
	virtual bool init();  

	//create函数
	CREATE_FUNC(CannonTypeMagicSlowLine);

	void tryGetTarget();

private:
	
	void attackOnce();

	

};



