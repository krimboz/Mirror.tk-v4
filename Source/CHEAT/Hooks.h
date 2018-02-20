#pragma once

extern bool DoUnload;

#include "Utilities.h"


namespace resolvokek
{
	extern int Shots;
	extern int missedshots;
	extern float RealAngle;
	extern float FakeAngle;
	extern bool shouldflip;
	extern bool ySwitch;
	extern float NextTime;
	extern int resom;
	extern float fakeAngle;
	extern float OldSimulationTime[65];
	extern bool error;
}



namespace Hooks
{
	void Initialise();
	void UndoHooks();


	extern Utilities::Memory::VMTManager VMTPanel; 
	extern Utilities::Memory::VMTManager VMTClient; 
	extern Utilities::Memory::VMTManager VMTClientMode;
	extern Utilities::Memory::VMTManager VMTModelRender;
	extern Utilities::Memory::VMTManager VMTPrediction; 
	extern Utilities::Memory::VMTManager VMTRenderView;
	extern Utilities::Memory::VMTManager VMTEventManager;
	extern Utilities::Memory::VMTManager VMTCreateMove;
};

namespace Resolver
{
	extern bool didhitHS;
}

extern bool flipAA;