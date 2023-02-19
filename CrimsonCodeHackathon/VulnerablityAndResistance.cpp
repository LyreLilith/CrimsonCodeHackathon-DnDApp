#include "vulnerabilityAndResistance.hpp"


VulnerabilityAndResistance::VulnerabilityAndResistance()
{
	for (int i = 0; i < 14; i++)
	{
		types[i] = 0;
	}
}

void VulnerabilityAndResistance::setSlashing(int val)
{
	Slashing = val;
}
void VulnerabilityAndResistance::setPiercing(int val)
{
	Piercing = val;
}
void VulnerabilityAndResistance::setBludgeoning(int val)
{
	Bludgeoning = val;
}
void VulnerabilityAndResistance::setPoison(int val)
{
	Poison = val;
}
void VulnerabilityAndResistance::setAcid(int val)
{
	Acid = val;
}
void VulnerabilityAndResistance::setFire(int val)
{
	Fire = val;
}
void VulnerabilityAndResistance::setCold(int val)
{
	Cold = val;
}
void VulnerabilityAndResistance::setRadiant(int val)
{
	Radiant = val;
}
void VulnerabilityAndResistance::setNecotic(int val)
{
	Necrotic = val;
}
void VulnerabilityAndResistance::setLightning(int val)
{
	Lighting = val;
}
void VulnerabilityAndResistance::setThunder(int val) {
	Thunder = val;
}
void VulnerabilityAndResistance::setForce(int val)
{
	Force = val;
}
void VulnerabilityAndResistance::setPsychic(int val)
{
	Psychic = val;
}
void VulnerabilityAndResistance::setNonMagic(int val)
{
	NonMagic = val;
}

int VulnerabilityAndResistance::getSlashing(void)
{
	
}
int VulnerabilityAndResistance::getPiercing(void) {
	return Piercing;
}
int VulnerabilityAndResistance::getBludgeoning(void)
{
	return Bludgeoning;
}
int VulnerabilityAndResistance::getPoison(void)
{
	return Poison;
}
int VulnerabilityAndResistance::getAcid(void)
{
	return Acid;
}
int VulnerabilityAndResistance::getCold(void)
{
	return Cold;
}
int VulnerabilityAndResistance::getRadiant(void)
{
	return Radiant;
}
int VulnerabilityAndResistance::getNecrotic(void)
{
	return Necrotic;
}
int VulnerabilityAndResistance::getLighting(void)
{
	return Lighting;
}
int VulnerabilityAndResistance::getThunder(void)
{
	return Thunder;
}
int VulnerabilityAndResistance::getForce(void)
{
	return Force;
}
int VulnerabilityAndResistance::getPsychic(void)
{
	return Psychic;
}
int VulnerabilityAndResistance::getNonMagic(void)
{
	return NonMagic;
}