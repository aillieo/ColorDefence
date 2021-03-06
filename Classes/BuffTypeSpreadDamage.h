﻿#pragma once

#include "cocos2d.h"
#include "Buff.h"

class BuffTypeSpreadDamage : public Buff
{
public:

	//初始化
	virtual bool init(Enemy* enemy, float buffTime, float damageSpread);  

	//create函数
	static BuffTypeSpreadDamage* create(Enemy* enemy, float buffTime, float damageSpread);

	virtual void overrideWithNewBuff(Buff* newBuff);

	virtual bool verifyWithTarget(Enemy* target);

	virtual void setAppearacneWithTarget(Enemy* target , bool show);

	void spreadDamage(cocos2d::Point position);

private:

	float _damageSpread;
};

