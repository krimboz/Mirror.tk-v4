#pragma once

#include "Hacks.h"
extern float lineLBY;
extern float lineRealAngle;
extern float lineFakeAngle;

struct BoxE
{
	int x = -1, y = -1, w = -1, h = -1;
};
class CEsp : public CHack
{
public:
	void Init();
	void Draw();

	void bigglow();

	void Move(CUserCmd *pCmd, bool &bSendPacket);
private:

	IClientEntity * BombCarrier;

	struct ESPBox
	{
		int x, y, w, h;
	};

	void DrawPlayer(IClientEntity* pEntity, player_info_t pinfo);
	void traceAim(IClientEntity * pEntity, Color color);
	Color GetPlayerColor(IClientEntity* pEntity);

	void DrawName1(player_info_t pinfo, CEsp::ESPBox size);
	void DrawBox(CEsp::ESPBox size, Color color, IClientEntity * pEntity);
	void DrawLinesAA(Color color);
	bool GetBox(IClientEntity* pEntity, ESPBox &result);

	void HpBox(CEsp::ESPBox size, Color color, IClientEntity * pEntity);
	void DrawNameX(player_info_t pinfo, CEsp::ESPBox size);
	void Barrel(CEsp::ESPBox size, Color color, IClientEntity * pEntity);

	void DrawGlow();

	void draw_name(IClientEntity * m_entity, BoxE box);
	void EntityGlow();
	void BacktrackingCross(IClientEntity * pEntity);
	void BombTimer(IClientEntity * pEntity, ClientClass * cClass);
	CEsp::ESPBox GetBOXX(IClientEntity * pEntity);


	void hp1(IClientEntity * pEntity, CEsp::ESPBox size);
	void armor1(IClientEntity * pEntity, CEsp::ESPBox size);


	void DrawInfo(IClientEntity* pEntity, ESPBox size);
	void DrawCross(IClientEntity* pEntity);
	void tracer(IClientEntity * pEntity, Color color);
	void DrawSkeleton(IClientEntity* pEntity);

	void Text(IClientEntity * entity, std::string text);

	void DrawThrowable(IClientEntity * throwable);
	void DrawMainPoints(IClientEntity * pEntity);
	void DrawDrop(IClientEntity* pEntity, ClientClass* cClass);
	void DrawBombPlanted(IClientEntity* pEntity, ClientClass* cClass);
	void DrawBomb(IClientEntity* pEntity, ClientClass* cClass);
};

