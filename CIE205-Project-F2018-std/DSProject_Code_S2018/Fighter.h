#pragma once
#include "e:\github\data_strucures_project\cie205-project-f2018-std\dsproject_code_s2018\enemies\enemy.h"
#pragma once
#include "Enemies\Enemy.h"
#include "Castle\Tower.h"

class Fighter : public Enemy
{
private:


public:
	Fighter(color r_c, REGION r_region, int d);
	~Fighter(void);
	void Act();
	virtual void Move();
	virtual bool is_frozen();
};

