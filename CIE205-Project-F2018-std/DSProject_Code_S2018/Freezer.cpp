#include "Freezer.h"


Freezer::Freezer(color r_c, REGION r_region, int d):Enemy( r_c,  r_region,d)
{
	reload_period=3;
}


Freezer::~Freezer(void)
{
}


void Freezer::Act()
{
	// here we will add some ice on the tower
}

void Freezer::Move()
{
	if(!is_frozen())
	{
		Distance--;
	}
}

bool Freezer::is_frozen()
{
	return frozen;
}