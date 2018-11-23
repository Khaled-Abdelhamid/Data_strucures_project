#pragma once
#include "Enemies\Enemy.h"
class Fighter : public Enemy
{
private:


public:
	Fighter(color r_c, REGION r_region, int d);
	~Fighter(void);
	void Act();
	virtual void Move();
};

