#pragma once
class Movement{
	
public:
	Movement();

	Movement(int walk, int fly, int swim, int climb, int burrow);

	int getWalk(void);
	int getFly();

private:
	int walk;
	int fly;
	int swim;
	int climb;
	int burrow;

};

