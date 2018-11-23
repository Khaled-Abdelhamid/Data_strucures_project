#pragma once
#include "Enemies\Enemy.h"
class Healer : 	public Enemy
{
public:
	Healer(color r_c, REGION r_region, int d);
	~Healer(void);
	virtual void Act();
	virtual void Move();
};

