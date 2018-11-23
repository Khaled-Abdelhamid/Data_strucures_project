#pragma once
#include "Enemies\Enemy.h"
class Freezer :
	public Enemy
{
public:
	Freezer(color r_c, REGION r_region, int d );
	~Freezer(void);
	void Act();
	virtual void Move();
};

