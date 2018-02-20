#pragma once

#include "GUI.h"
#include "Controls.h"
#include "Hooks.h"


//Config fix By Wonder

class CRageBotTab : public CTab
{
public:
	void Setup();

	CLabel ActiveLabel;
	CCheckBox Active;


	CKeyBind ManualAA;


	CGroupBox AimbotGroup;
	CCheckBox AimbotEnable;
	CCheckBox chokepackets;
	CCheckBox freestandtoggle;
	CComboBox freestand;
	CCheckBox AimbotAutoFire;
	CKeyBind ragetrack;
	CSlider  AimbotFov;
	CCheckBox AimbotSilentAim;
	CCheckBox PVSFix;
	CCheckBox posadjust;
	CCheckBox pingspike;
	CKeyBind AimbotBaimOnKey;
	CComboBox AimbotResolver;
	CCheckBox AdvancedResolver;
	CCheckBox AutoRevolver;
	CSlider AddFakeYaw;
	CSlider CustomPitch;
	CCheckBox LBY;
	CComboBox FakeYaw;
	CComboBox MoveYaw;
	CComboBox MoveYawFake;
	CCheckBox LowerbodyFix;
	CCheckBox PreferBodyAim;
	CCheckBox AWPAtBody;
	CSlider xaneafterX;
	CSlider BaimIfUnderXHealth;
	CSlider XShots;

	CCheckBox EnginePrediction;
	CCheckBox AimbotAimStep;
	CCheckBox AimbotKeyPress;
	CKeyBind  AimbotKeyBind;
	CKeyBind  AimbotStopKey;
	CSlider  forceback;

	CGroupBox TargetGroup;
	CComboBox TargetSelection;
	CCheckBox TargetFriendlyFire;
	CComboBox TargetHitbox;
	CComboBox TargetHitscan;
	CCheckBox TargetMultipoint;
	CSlider   TargetPointscale;

	CGroupBox AccuracyGroup;
	CComboBox AccuracyRecoil;
	CCheckBox positioncorrect;
	CCheckBox AccuracyAutoWall;
	CSlider AccuracyMinimumDamage;
	CCheckBox AccuracyAutoStop;
	CCheckBox AccuracyAutoCrouch;
	CCheckBox AccuracyAutoScope;
	CSlider   AccuracyHitchance;
	CComboBox AccuracyResolver;
	CCheckBox Resolverhelper;
	CKeyBind AimbotResolverOverride;

	CComboBox baimfactor;

	CGroupBox AntiAimGroup;
	CCheckBox AntiAimEnable;
	CComboBox AntiAimPitch;
	CComboBox AntiAimYaw;
	CComboBox movingY;
	CCheckBox FlipAA;
	CSlider BreakLBY;
	CComboBox edgeAA;
	CSlider AntiAimOffset;
	CCheckBox AntiAimKnife;
	CCheckBox AntiAimTarget;
};

class CLegitBotTab : public CTab
{
public:
	void Setup();

	// Master Switch
	CLabel ActiveLabel;
	CCheckBox Active;

	CGroupBox AimbotGroup;

	CCheckBox AimbotEnable;
	CCheckBox AimbotAutoFire;
	CSlider   TickModulation;
	CCheckBox AimbotBacktrack;
	CCheckBox AimbotFriendlyFire;
	CCheckBox AimbotKeyPress;
	CKeyBind  AimbotKeyBind;
	CCheckBox AimbotSmokeCheck;
	CCheckBox BackTrack;

	CGroupBox TriggerGroup;
	CCheckBox TriggerEnable;
	CCheckBox TriggerKeyPress;
	CKeyBind  TriggerKeyBind;
	CCheckBox TriggerHitChance;
	CSlider   TriggerHitChanceAmmount;
	CSlider   TriggerDelay;
	CSlider   TriggerBurst;
	CSlider   TriggerBreak;
	CCheckBox TriggerRecoil;

	CGroupBox TriggerFilterGroup;
	CCheckBox TriggerHead;
	CCheckBox TriggerChest;
	CCheckBox TriggerStomach;
	CCheckBox TriggerArms;
	CCheckBox TriggerLegs;
	CCheckBox TriggerTeammates;
	CCheckBox TriggerFlashCheck;
	CCheckBox TriggerSmokeCheck;

	CGroupBox WeaponMainGroup;
	CSlider   WeaponMainSpeed;
	CSlider   WeaponMainFoV;
	CSlider WeaponMainRecoil;
	CComboBox WeaponMainHitbox;
	CSlider WeaponMainAimtime;
	CSlider WeaoponMainStartAimtime;

	CGroupBox WeaponPistGroup;
	CSlider   WeaponPistSpeed;
	CSlider   WeaponPistFoV;
	CSlider WeaponPistRecoil;
	CComboBox WeaponPistHitbox;
	CSlider WeaponPistAimtime;
	CSlider WeaoponPistStartAimtime;

	CGroupBox WeaponSnipGroup;
	CSlider   WeaponSnipSpeed;
	CSlider   WeaponSnipFoV;
	CSlider WeaponSnipRecoil;
	CComboBox WeaponSnipHitbox;
	CSlider WeaponSnipAimtime;
	CSlider WeaoponSnipStartAimtime;

	CGroupBox WeaponMpGroup;
	CSlider   WeaponMpSpeed;
	CSlider   WeaponMpFoV;
	CSlider WeaponMpRecoil;
	CComboBox WeaponMpHitbox;
	CSlider WeaponMpAimtime;
	CSlider WeaoponMpStartAimtime;

	CGroupBox WeaponShotgunGroup;
	CSlider   WeaponShotgunSpeed;
	CSlider   WeaponShotgunFoV;
	CSlider WeaponShotgunRecoil;
	CComboBox WeaponShotgunHitbox;
	CSlider WeaponShotgunAimtime;
	CSlider WeaoponShotgunStartAimtime;

	CGroupBox WeaponMGGroup;
	CSlider   WeaponMGSpeed;
	CSlider   WeaponMGFoV;
	CSlider WeaponMGRecoil;
	CComboBox WeaponMGHitbox;
	CSlider WeaponMGAimtime;
	CSlider WeaoponMGStartAimtime;
};

class CVisualTab : public CTab
{
public:
	void Setup();

	CLabel ActiveLabel;
	CCheckBox Active;
	CCheckBox pLocalOpacity;
	CSlider colmod;
	CSlider colmodr;
	CSlider colmodg;
	CSlider colmodb;
	CCheckBox hitbone;
	CCheckBox colmodupdate;
	CCheckBox nadepred;
	CGroupBox OptionsGroup;
	CGroupBox InfoGroup;
	CGroupBox RemovalsGroup;
	CGroupBox ChamsGroup;
	CGroupBox BoxGroup;
	CComboBox OptionsBox;
	CCheckBox OptionsName;
	CComboBox HitmarkerSound;
	CCheckBox Logs;
	CComboBox angleindicator;

	CComboBox ghostcham;

	CCheckBox traceAim;
	CCheckBox OtherHitmarker;
	CCheckBox indicator;
	CCheckBox OptionsWeapon;
	CCheckBox OptionHealthEnable;
	CCheckBox OptionsInfo;
	CCheckBox ResolverInfo;
	CCheckBox BulletTrace;
	CCheckBox Barrels;
	CCheckBox AALines;
	CCheckBox ChamsVisibleOnly;
	CCheckBox Watermark;
	CCheckBox WelcomeMessage;
	CCheckBox LocalPlayerESP;
	CCheckBox CanHit;
	CCheckBox OptionsHelmet;
	CCheckBox NightMode;
	CCheckBox OptionsKit;
	CCheckBox SpecList;
	CCheckBox IsScoped;
	CCheckBox CompRank;
	CCheckBox HasDefuser;
	CCheckBox GrenadeTrace;
	CCheckBox Distance;
	CCheckBox DiscoLights;
	CCheckBox Money;
	CCheckBox OptionsDefuse;
	CComboBox OptionsChams;
	CCheckBox OptionsArmor;
	CSlider  GlowZ;
	CCheckBox OptionsSkeleton;
	CCheckBox BacktrackingLol;
	CComboBox OptionsAimSpot;
	CCheckBox OtherNoScope;
	CCheckBox OptionsCompRank;

	CGroupBox FiltersGroup;
	CCheckBox FiltersAll;
	CCheckBox FiltersPlayers;
	CCheckBox FiltersSelf;
	CCheckBox FiltersEnemiesOnly;
	CCheckBox FiltersWeapons;
	CCheckBox FiltersNades;
	CCheckBox FiltersC4;
	CGroupBox GlowGroup;
	CGroupBox RenderGroup;
	CGroupBox OtherGroup;
	CCheckBox OtherSpreadCrosshair;
	CComboBox OtherRecoilCrosshair;
	CCheckBox OptionsGlow;
	CCheckBox EntityGlow;
	CCheckBox aesthetic;
	CCheckBox DisablePostProcess;
	CCheckBox OtherRadar;
	CCheckBox OtherNoVisualRecoil;
	CCheckBox OtherNoSky;
	CCheckBox OtherNoFlash;
	CCheckBox OtherNoSmoke;
	CCheckBox OtherAsusWalls;
	CComboBox OtherNoHands;
	CSlider OtherViewmodelFOV;
	CSlider OtherFOV;
};

class CSkinchangerTab : public CTab
{
public:
	void Setup();


	CLabel SkinActive;
	CCheckBox SkinEnable;
	CButton   SkinApply;

	CGroupBox KnifeGroup;
	CComboBox KnifeModel;
	CComboBox KnifeSkin;
	CCheckBox GG;

	CGroupBox PistolGroup;
	CComboBox GLOCKSkin;
	CComboBox USPSSkin;
	CComboBox DEAGLESkin;
	CComboBox MAGNUMSkin;
	CComboBox DUALSSkin;
	CComboBox RevolverSkin;
	CComboBox FIVESEVENSkin;
	CComboBox TECNINESkin;
	CComboBox P2000Skin;
	CComboBox P250Skin;

	CGroupBox MPGroup;
	CComboBox MAC10Skin;
	CComboBox P90Skin;
	CComboBox UMP45Skin;
	CComboBox BIZONSkin;
	CComboBox MP7Skin;
	CComboBox MP9Skin;

	CGroupBox Riflegroup;
	CComboBox M41SSkin;
	CComboBox M4A4Skin;
	CComboBox AK47Skin;
	CComboBox AUGSkin;
	CComboBox FAMASSkin;
	CComboBox GALILSkin;
	CComboBox SG553Skin;

	CGroupBox MachinegunsGroup;
	CComboBox NEGEVSkin;
	CComboBox M249Skin;

	CGroupBox Snipergroup;
	CComboBox SCAR20Skin;
	CComboBox G3SG1Skin;
	CComboBox SSG08Skin;
	CComboBox AWPSkin;

	CGroupBox Shotgungroup;
	CComboBox MAG7Skin;
	CComboBox XM1014Skin;
	CComboBox SAWEDOFFSkin;
	CComboBox NOVASkin;

	CGroupBox SkinsettingsGroup;
	CCheckBox StatTrakEnable;
};

class ColourTab : public CTab
{
public:
	void Setup();
	CGroupBox esp;
	CSlider TespR;
	CSlider TespG;
	CSlider TespB;

	CSlider CTespR;
	CSlider CTespG;
	CSlider CTespB;

	CGroupBox cham;
	CSlider chamtr;
	CSlider chamtg;
	CSlider chamtb;

	CGroupBox cham2;
	CSlider chamctr;
	CSlider chamctg;
	CSlider chamctb;

	CGroupBox cham3;
	CSlider vchamtr;
	CSlider vchamtg;
	CSlider vchamtb;

	CGroupBox cham4;
	CSlider vchamctr;
	CSlider vchamctg;
	CSlider vchamctb;


	CGroupBox watermarkG;
	CSlider markr;
	CSlider markg;
	CSlider markb;

	CGroupBox gtitle;
	CSlider titler;
	CSlider titleg;
	CSlider titleb;

	CGroupBox grainbow;
	CSlider grad1r;
	CSlider grad1g;
	CSlider grad1b;

	CSlider grad2r;
	CSlider grad2g;
	CSlider grad2b;

	CSlider grad3r;
	CSlider grad3g;
	CSlider grad3b;

	CSlider grad4r;
	CSlider grad4g;
	CSlider grad4b;

	CGroupBox mAlpha;
	CSlider alpMenu;
	CSlider alpEsp;



};


class CMiscTab : public CTab
{

public:
	void Setup();
	CButton SaveButton;
	CButton LoadButton;
	CButton UnloadButton;
	CComboBox ConfigBox;
	CGroupBox ConfigGroup;
	CGroupBox OtherGroup;
	CCheckBox OtherAutoJump;
	CCheckBox OtherEdgeJump;
	CComboBox OtherAutoStrafe;
	CCheckBox OtherSafeMode;
	CCheckBox ChatSpam;
	CCheckBox EnableGloves;
	CKeyBind OtherCircleButton;
	CCheckBox OtherCircleStrafe;
	CKeyBind OtherCircle;
	CComboBox GloveSkin;
	CComboBox GloveModel;
	CTextField CustomClantag;
	CCheckBox CheatsByPass;
	CCheckBox AutoAccept;
	CCheckBox BuyBotKevlar;
	CCheckBox BuyBotDefuser;
	CComboBox BuyBotGrenades;
	CSlider CircleAmount;
	CKeyBind FakeWalk;
	CComboBox FakeLagTyp;
	CCheckBox OtherTeamChat;
	CSlider ClanTagSpeed;
	CSlider	  OtherChatDelay;
	CComboBox NameChanger;
	CCheckBox AutoPistol;
	CCheckBox ClanTag;
	CCheckBox TrashTalk;
	CKeyBind  OtherAirStuck;
	CKeyBind  keybasedaaleft;
	CKeyBind  keybasedaaright;
	CCheckBox OtherSpectators;
	CCheckBox OtherThirdperson;
	CKeyBind  ThirdPersonKeyBind;
	CComboBox ThirdpersonAngle;
	CCheckBox OtherThirdpersonFake;
	CComboBox OtherClantag;
	CTextField customclan;
	CCheckBox EnableBuyBot;
	CComboBox BuyBot;
	CGroupBox BuyBotGroup;
	CSlider WalkBotDistance;
	CSlider WalkBotEdge;
	CCheckBox WalkBot;
	CGroupBox WalkBotGroup;
	CGroupBox FakeLagGroup;
	CCheckBox FakeLagEnable;

	CGroupBox wpnhitchanceGroup;
	CCheckBox WeaponCheck;
	CSlider  scoutChance;
	CSlider  AWPChance;
	CSlider  AutoChance;
	CSlider  RifleChance;
	CSlider  MPChance;
	CSlider  PistolChance;
	CSlider  R8Chance;
	CSlider  zeuschance;

	CGroupBox wpnmindmgGroup;
	CSlider  scoutmindmg;
	CSlider  AWPmindmg;
	CSlider  Automindmg;
	CSlider  Riflemindmg;
	CSlider  MPmindmg;
	CSlider  Pistolmindmg;
	CSlider zeusdmg;
	CSlider  R8mindmg;

	CComboBox KnifeModel;
	CGroupBox KnifeSkins;
	CCheckBox SkinEnable;
	CComboBox KnifeSkin;
	CGroupBox KnifeGroup;
	CButton SkinApply;
	CButton GlovesApply;

};


class Caabuild : public CTab
{
public:
	void Setup();

	CGroupBox pitchctrl;
	CGroupBox pitchctrl2;
	CGroupBox pitchctrl3;
	CGroupBox pitchctrl4;
	CGroupBox pitchctrl5;

	CComboBox pitchpick; // pick what type of pitch we want

	CSlider pitchbase; // base

	CSlider pitch_jitter_from; // Pitch starting point
	CSlider pitch_jitter_to; // pitch end point

	CSlider pitch_safe_fake; // MatchMaking and Spread safe ghetto fake
	CSlider pitch_safe_real; // MatchMaking and Spread safe ghetto real

	CSlider pitch_unsafe_fake; // NoSpread Fake
	CSlider pitch_unsafe_real; // NoSpread Real


	CGroupBox fakelag;
	CComboBox FakeLagTyp;

	CGroupBox yawctrl1;
	CGroupBox yawctrl2;
	CGroupBox yawctrl3;
	CGroupBox yawctrl4;
	CGroupBox yawctrl5;

	CComboBox yawpick; // pick what type of Y we want

	CSlider yawbase; // base
	CCheckBox yaw_add_jitter;

	CSlider yaw_switch_from; // yaw starting point
	CSlider yaw_switch_to; // yaw end point

	CSlider yaw_jitter_from; // yaw starting point
	CSlider yaw_jitter_to; // yaw end point

	CSlider spinspeed;

	//-----------------IM-REALLY-GETTING-TIRED-----------------//

	CGroupBox fyawctrl1;
	CGroupBox fyawctrl2;
	CGroupBox fyawctrl3;
	CGroupBox fyawctrl4;
	CGroupBox fyawctrl5;

	CGroupBox antilbyctrl;

	CComboBox fyawpick; // pick what type of Y we want

	CSlider fyawbase; // base
	CCheckBox fyaw_add_jitter;

	CSlider fyaw_switch_from; // yaw starting point
	CSlider fyaw_switch_to; // yaw end point

	CSlider fyaw_jitter_from; // yaw starting point
	CSlider fyaw_jitter_to; // yaw end point

	CSlider fspinspeed;

	CSlider   FakeLagChoke;

	CSlider Antilby;
	CSlider moveantilby;
};


class mirrorwindow : public CWindow
{
public:
	void Setup();

	CRageBotTab RageBotTab;
	CLegitBotTab LegitBotTab;
	CVisualTab VisualsTab;
	CMiscTab MiscTab;
	CSkinchangerTab SkinchangerTab;
	ColourTab colourtab;
	Caabuild aabuild;

	CComboBox ConfigBox;
	CGroupBox ConfigGroup;
	CButton SaveButton1;
	CButton LoadButton1;
	CButton SaveButton;
	CButton LoadButton;
	CButton UnloadButton;
	CButton PanicButton;
	CButton ThirdButton;
	CButton ByPass;
	CButton FirstButton;
};


namespace Menu
{
	void SetupMenu();
	void DoUIFrame();

	extern mirrorwindow Window;
};
