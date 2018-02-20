#include <array>
#include <string>
#include <deque>
#include <algorithm>
#include "Entities.h"
#include "CommonIncludes.h"
#include "Entities.h"
#include "Vector.h"
#include <map>
#include "Interfaces.h"
#include "Hacks.h"
#include "Hooks.h"


class ResoSetup
{
public:
	bool didhit;
	void OldY(IClientEntity * pEntity);
	void Resolve(IClientEntity * pEntity, int CurrentTarget);
	void FSN(IClientEntity * pEntity, ClientFrameStage_t stage);
	//	void FSN(IClientEntity* pEntity, ClientFrameStage_t stage); //used to get the fresh THINGS and the resolve

	void CM(IClientEntity* pEntity); //cause this is slower than FSN so we are going to get older info and not updated at all ez to compare between etc.
									 //	void Resolve(IClientEntity* pEntity, ClientFrameStage_t stage); //resolve
	void StoreThings(IClientEntity* pEntity);
	void anglestore(IClientEntity * pEntity);
	void StoreExtra(IClientEntity* pEntity);
	std::map<int, QAngle>StoredAngles; //y and x lol (stored)
	std::map<int, QAngle>NewANgles; //y and x lol (new)
	std::map<int, float>storedlby;
	std::map<int, float>panicangle;
	std::map<int, float>storedhp;
	std::map<int, float>badangle;
	std::map<int, float>storedpanic;
	std::map<int, float>newlby;
	std::map<int, float>storeddelta;
	std::map<int, float>newdelta;
	std::map<int, float>finaldelta;
	std::map<int, float>storedlbydelta;
	std::map<int, float>storedhealth;
	std::map<int, float>newlbydelta;
	std::map<int, float>finallbydelta;
	float newsimtime;
	float storedsimtime;
	bool lbyupdated;
	float storedlbyFGE;

	float storedanglesFGE;
	float storedsimtimeFGE;
	bool didhitHS;
	void Resolve(IClientEntity * pEntity, int CurrentTarget, QAngle & oAngles);
	void StoreFGE(IClientEntity* pEntity);
	static ResoSetup GetInst()
	{
		static ResoSetup instance;
		return instance;
	}
};


namespace Globals
{
  

	extern CUserCmd* UserCmd;
	extern IClientEntity* Target;
	extern int Shots;
	extern bool change;
	extern int TargetID;
	extern bool didhitHS;
	extern int missedshots;
	extern std::map<int, QAngle> storedshit;
}
