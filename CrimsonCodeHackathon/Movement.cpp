#include "Movement.hpp"

Movement::Movement()
{
	walk = 0;
	fly = 0;
	climb = 0;
	swim = 0;
	burrow = 0;
}

Movement::Movement(int walkIN, int flyIN, int swimIN, int climbIN, int burrowIN)  
{
	walk = walkIN;
	fly = flyIN;
	climb = climbIN;
	swim =swimIN;
	burrow = burrowIN;
}
int Movement::getWalk(void)
{
	return walk;
}
int Movement::getFly(void)
{
	return fly;
}
int Movement::getClimb(void)
{
	return climb;
}

int Movement::getSwim(void)
{
	return swim;
}

int Movement::getBurrow(void)
{
	return burrow;
}


	
