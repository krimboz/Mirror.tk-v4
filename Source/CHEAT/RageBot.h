#pragma once

#include "Hacks.h"

class CRageBot : public CHack
{
public:
	void Init();

	void random1();

	void Prediction(CUserCmd * pCmd, IClientEntity * LocalPlayer);

	void random2();

	void Draw();
	void Move(CUserCmd *pCmd, bool &bSendPacket);
private:

	int GetTargetCrosshair();
	int GetTargetDistance();
	int GetTargetNextShot();
	int GetTargetThreat(CUserCmd * pCmd);
	int GetTargetHealth();
	bool TargetMeetsRequirements(IClientEntity* pEntity);
	void aimAtPlayer(CUserCmd * pCmd);
	float FovToPlayer(Vector ViewOffSet, Vector View, IClientEntity* pEntity, int HitBox);
	int HitScan(IClientEntity* pEntity);
	bool AimAtPoint(IClientEntity* pLocal, Vector point, CUserCmd *pCmd, bool &bSendPacket);

    bool extra(bool & bSendPacket);

	void DoAimbot(CUserCmd *pCmd, bool &bSendPacket);
	void DoNoRecoil(CUserCmd *pCmd);
	void ns1(CUserCmd * pCmd, IClientEntity * LocalPlayer);
	void nospread(CUserCmd * pCmd);
	void DoAntiAim(CUserCmd *pCmd, bool&bSendPacket);


	bool IsAimStepping;
	Vector LastAimstepAngle;
	Vector LastAngle;

	bool IsLocked;
	int TargetID;
	int HitBox;
	Vector AimPoint;
};