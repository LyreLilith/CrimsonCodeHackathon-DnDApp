#include "VurablityAndResitance.hpp"

VurabilityAndResitance::VurabilityAndResitance(void)
{
	for (int i = 0; i < 14; i++)
	{
		types[i] = 0;
	}
}
void VurabilityAndResitance::setSlashing(int val)
{
	types[0]=val;
}
void VurabilityAndResitance::setPiercing(int val)
{
	types[1]=val;
}
void VurabilityAndResitance::setBludgeoning(int val)
{
	types[2] = val;
}
void VurabilityAndResitance::setPosion(int val)
{
		types[3] = val;
}
void VurabilityAndResitance::setAcid(int val)
{
	types[4] = val;
}
void VurabilityAndResitance::setFire(int val)
{
	types[5] = val;
}
void VurabilityAndResitance::setCold(int val)
{
	types[6] = val;
}
void VurabilityAndResitance::setRadiant(int val)
{
	types[7] = val;
}
void VurabilityAndResitance::setNecotic(int val)
{
	types[8] = val;
}
void VurabilityAndResitance::setLightning(int val)
{
	types[9] = val;
}
void VurabilityAndResitance::setThunder(int val)
{
	types[10] = val;
}
void VurabilityAndResitance::setForce(int val)
{
	types[11] = val;
}
void VurabilityAndResitance::setPsychic(int val)
{
	types[12] = val;
}
void VurabilityAndResitance::setNonMagic(int val)
{
	types[13] = val;
}

