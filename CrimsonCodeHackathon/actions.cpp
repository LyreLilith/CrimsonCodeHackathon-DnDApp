#include "actions.hpp"
#include <string>
using namespace std;

Actions::Actions()
{
	std::string name;
	hitMod = 0;
	std::string damageDie;
	std::string description;
}

Actions::Actions(string nameIN, int hitModIN, string damageDieIN, string descriptionIN)
{
	name = nameIN;
	hitMod = hitModIN;
	damageDie = damageDieIN;
	description = descriptionIN;
}

string Actions::getName(void)
{
	return name;
}

int Actions::getHitMod(void)
{
	return hitMod;
}

string Actions::getDamageDie(void)
{
	return damageDie;
}

string Actions::getDescription(void)
{
	return description;
}