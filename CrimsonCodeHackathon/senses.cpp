#include "senses.hpp"
#include <ostream>

Senses::Senses()
{
	dark = 0;
	blind = 0;
	truesight = 0;
	tremor = 0;
	passivePerception = 0;
}

Senses::Senses(int darkIN, int blindIN, int truesightIN, int tremorIN, int passivePerceptionIN)
{
	dark = darkIN;
	blind = blindIN;
	truesight = truesightIN;
	tremor = tremorIN;
	passivePerception = passivePerceptionIN;
}

int Senses::getDark(void)
{
	return dark;
}

int Senses::getBlind(void)
{
	return blind;
}

int Senses::getTruesight(void)
{
	return truesight;
}

int Senses::getTremor(void)
{
	return tremor;
}

int Senses::getPassivePerception(void)
{
	return passivePerception;
}

std::ostream& operator<<(std::ostream& statObj, Senses& rtn)
{
	statObj << " Dark Sight:" << rtn.getDark() << " Blind Sight: " << rtn.getBlind() << "True Sight: " << rtn.getTruesight() << "Tremor" << rtn.getTremor() << "Pasive Preception: " << rtn.getPassivePerception();
	return statObj;
}