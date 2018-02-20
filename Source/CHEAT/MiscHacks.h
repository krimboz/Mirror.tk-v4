#pragma once

#include "Hacks.h"

Vector GetAutostrafeView();

class CMiscHacks : public CHack
{
public:

	

	void madkids(IGameEvent * event);

	void Init();
	void Draw();
	void Move(CUserCmd *pCmd, bool &bSendPacket);
private:
	void AutoPistol(CUserCmd * pCmd);
	void SetClanTag(const char * tag, const char * name);
	void Namespam();
	void NoName();
	void NameSteal();
	void Crasher();
	void CrazySpam();

	void AutoJump(CUserCmd *pCmd);
	void LegitStrafe(CUserCmd *pCmd);
	void RageStrafe(CUserCmd *pCmd);
	int CircleFactor = 0;
};



