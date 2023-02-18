#pragma once
class Movement{
	
public:
	Movement();

	Movement(int walk, int fly, int swim, int climb, int burrow);

	int getWalk(void);
	int getFly(void);
	int getSwim(void);
	int getClimb(void);
	int getBurrow(void)

private:
	int walk;
	int fly;
	int swim;
	int climb;
	int burrow;

};

