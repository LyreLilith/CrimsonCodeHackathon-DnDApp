#pragma once

class VurabilityAndResitance
{
public:
	VurabilityAndResitance();

	void setSlashing(int val);
	void setPiercing(int val);
	void setBludgeoning(int val);
	void setPosion(int val);
	void setAcid(int val);
	void setFire(int val);
	void setCold(int val);
	void setRadiant(int val);
	void setNecotic(int val);
	void setLightning(int val);
	void setThunder(int val);
	void setForce(int val);
	void setPsychic(int val);
	void setNonMagic(int val);

	int getSlash(void);
	int getPierce(void);
	int getBlude(void);
	int getPos(void);
	int getAcid(void);
	int getCold(void);
	int getRad(void);
	int getNecro(void);
	int getLighting(void);
	int getThunder(void);
	int getForce(void);
	int getPsychic(void);
	int getNonMagic(void);

private:
	int types[14];
};