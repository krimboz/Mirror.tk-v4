#pragma once

#pragma once

#include "CommonIncludes.h"
#include "SDK.h"
#include "Menu.h"
#include <vector>

extern bool toggleSideSwitch;

namespace Hacks
{
	void SetupHacks();

	void DrawHacks();
	void MoveHacks(CUserCmd *pCmd, bool &bSendPacket);
}

namespace Hecks
{
	void SetupHecks();

	void DrawHecks();

}

class CHack
{
public:
	virtual void Draw() = 0;
//	virtual void extra() = 0;
	virtual void Move(CUserCmd *pCmd, bool &bSendPacket) = 0;
	virtual void Init() = 0;
};

class CHecke
{
public:
	virtual void extra() = 0;
	virtual void Init() = 0;
};

class HackManager
{
public:

	void RegisterHack(CHack* hake);

	void Ready();

	void Draw();

	

	void Move(CUserCmd *pCmd,bool &bSendPacket);
	IClientEntity *pLocal();
private:
	std::vector<CHack*> Hacks;
	IClientEntity *pLocalInstance;
	bool IsReady;
};

extern HackManager hackManager;

class HeckManager
{
public:


	void Ready();

	void Register(CHecke * hake);

	void extra();



	
	IClientEntity *pLocal();
	void RegisterHeck(CHecke * hake);
private:
	std::vector<CHecke*> Hecks;
	IClientEntity *pLocalInstance;
	bool IsReady;
}; extern HeckManager heckManager;
