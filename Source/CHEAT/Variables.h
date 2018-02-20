#pragma once


struct Variables
{

	struct
	{
		bool MainSwitch;
		bool 	Enabled;
		bool 	AutoFire;
		bool    AutoPistol;
		float 	FOV;
		bool 	Silent;
		int KeyPress;
		bool AimStep;
		float bruteAfterX;
		bool FakeLag;
		int		FakeLagAmt;
		bool PosAdj;

		bool	EnabledAntiAim;
		int		Pitch;
		int		YawTrue;
		int		YawFake;
		bool	AtTarget;
		bool	Edge;
		bool KnifeAA;


		bool FriendlyFire;
		int		Hitbox;
		int		Hitscan;
		float Pointscale;
		bool Multipoint;
		float Multipoints;


		bool AntiRecoil;
		bool AutoWall;
		bool AutoStop;
		bool AutoCrouch;
		bool AutoScope;
		float MinimumDamage;
		bool Hitchance;
		float HitchanceAmount;
		bool Resolver;
		bool FakeLagFix;
		bool playerlist;
		bool fakewalk;
		int BAIMkey;
		bool fakeanglechams;
		
	} Ragebot;

	struct
	{
		bool MainSwitch;
        bool backtrack;
		bool memedot;
		struct
		{
			bool 	Enabled;

            
		} Aimbot;


			int MainKey = 1;
            float MainSmooth;
			float Mainfov;
            float main_recoil_min;
            float main_recoil_max;


			int PistolKey = 6;
			float Pistolfov;
			float PistolSmooth;






		struct
		{
			bool	Enabled;
			float Delay;
			int Key = 6;
			float hitchance;
			struct
			{
				bool Head;
				bool Arms;
				bool Chest;
				bool Stomach;
				bool Legs;
			} Filter;

		} Triggerbot;

	} Legitbot;

	struct
	{
		bool 	Enabled;

		bool Box;
		bool IsVisibleBox;
		bool Name;
		bool HP;
		bool IsVisibleHP;
		bool Weapon;
		bool Info;
		bool Chams;
		bool IsVisibleChams;
		bool Skeleton;
		bool AimSpot;
		bool DLight;
		bool GrenadeESP;
		bool IsScoped;
		bool C4;
		bool Glow;
		bool crosshair;
		int Hands;
		int Weapons;
		float FOVChanger;
		float viewmodelChanger;
		bool NoFlash;
		bool NoSmoke;
		bool ThirdPerson;
		bool Time;
		bool BulletTrace;
		bool money;
		bool LBYIndicator;
		bool C4World;
		bool NoVisualRecoil;
		bool WeaponsWorld;
		bool noscopeborder;
		bool GrenadePrediction;

		struct
		{
			bool EnemyOnly;
		} Filter;


	} Visuals;

	struct
	{
		int ragequit;
		bool Bhop;
		bool ServerRankRevealAll;
		bool nightMode;
		bool ClantagChanger;
		bool SpecList;
		bool asus;
		bool chrome;
		int fakelag;
		bool hitmarker;
		bool hitsound;
		bool EventLog;
		bool AWalldmg;
		bool autostrafe;
		int thirdpersonkey;
		int thirdpersontype;
		bool namespam;
		bool AutoAccept;
		bool inaccuracy;
		bool resolvemode;
		bool aalines;


	} Misc;
	struct
	{
		bool Enabled;
		int Knife;
        int gloves;
		int KnifeSkin;
		int AK47Skin;
		int M4A1SSkin;
		int M4A4Skin;
		int AUGSkin;
		int FAMASSkin;
		int AWPSkin;
		int SSG08Skin;
		int SCAR20Skin;
		int P90Skin;
		int UMP45Skin;
		int MP9Skin;
		int GlockSkin;
		int USPSkin;
		int DeagleSkin;
		int tec9Skin;
		int P2000Skin;
		int P250Skin;
	} Skinchanger;
	struct
	{
		float chams_color_vis[3] = { 0 / 255.f,191 / 255.f,255 / 255.f };
		float chams_color_notvis[3] = { 68 / 255.f,94 / 255.f,255 / 255.f };
		float box_color_t[3] = { 255 / 255.f,255 / 255.f,255 / 255.f };
		float box_color_ct[3] = { 255 / 255.f,255 / 255.f,255 / 255.f };
		float hit_color[3] = { 255 / 255.f,255 / 255.f,255 / 255.f };
		float hands_color[3] = { 255 / 255.f,255 / 255.f,255 / 255.f };
		float hands_alpha;
		float tracer_color[3] = { 255 / 255.f,255 / 255.f,255 / 255.f };
		float dlight_color[3] = { 36 / 255.f,244 / 255.f ,41 / 255.f };
		float crosshair_color[3] = { 0 / 255.f,255 / 255.f,0 / 255.f };

	}Colors;

	struct
	{
		bool	Opened = false;
		int 	Key;
		bool	Legitbot = false;
		bool	Visual = false;
		bool	Misc = false;
		int		ConfigFile = 0;
		int		page;
		int		Theme = 4;
		bool	Colors = false;
		bool ShowRage = false;

	} Menu;
};

extern Variables g_Options;