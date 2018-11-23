#include "Enemies\Fighter.h"


Fighter::Fighter(color r_c, REGION r_region, int d):Enemy( r_c,  r_region,d)
{
	reload_period=3;
}


Fighter::~Fighter(void)
{
}

void Fighter::Act()
{
	// here we will minimize the health of the tower of our region
}


void Fighter::Move()
{

}