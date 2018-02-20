#pragma once
#include <iostream>
#include "UTIL Functions.h"

class CAntiSpread
{
public:
	Vector SpreadFactor(int seed);
	void antispread(CUserCmd* pCmd);



	void CalcClient(Vector vSpreadVec, Vector ViewIn, Vector &ViewOut);
	void CalcServer(Vector vSpreadVec, Vector ViewIn, Vector &vecSpreadDir);
	void GetSpreadVec(CUserCmd*cmd, Vector &vSpreadVec);
	void CompensateInAccuracyNumeric(CUserCmd*cmd);
	void RollSpread(CBaseCombatWeapon*localWeap, int seed, CUserCmd*cmd, Vector& pflInAngles);
}; extern CAntiSpread* NoSpread;
class CGlobalPointers
{
public:

	CBaseCombatWeapon * mainwep;

}; extern CGlobalPointers* g_GlobalPointers;
namespace glb
{
	extern	CBaseCombatWeapon* mainwep = nullptr;
}
extern CBaseCombatWeapon* glb::mainwep;
#define MD5_DIGEST_LENGTH 16  
#define F1(x, y, z) (z ^ (x & (y ^ z)))
#define F2(x, y, z) F1(z, x, y)
#define F3(x, y, z) (x ^ y ^ z)
#define F4(x, y, z) (y ^ (x | ~z))
typedef struct
{
	unsigned int	buf[4];
	unsigned int	bits[2];
	unsigned char	in[64];
} MD5Context_t;
#define MD5STEP(f, w, x, y, z, data, s) \
	(w += f(x, y, z) + data, w = w << s | w >> (32 - s), w += x)

void MD5Init(MD5Context_t *ctx)
{
	ctx->buf[0] = 0x67452301;
	ctx->buf[1] = 0xefcdab89;
	ctx->buf[2] = 0x98badcfe;
	ctx->buf[3] = 0x10325476;

	ctx->bits[0] = 0;
	ctx->bits[1] = 0;
}

static void MD5Transform(unsigned int buf[4], unsigned int const in[16])
{
	register unsigned int a, b, c, d;

	a = buf[0];
	b = buf[1];
	c = buf[2];
	d = buf[3];

	MD5STEP(F1, a, b, c, d, in[0] + 0xd76aa478, 7);
	MD5STEP(F1, d, a, b, c, in[1] + 0xe8c7b756, 12);
	MD5STEP(F1, c, d, a, b, in[2] + 0x242070db, 17);
	MD5STEP(F1, b, c, d, a, in[3] + 0xc1bdceee, 22);
	MD5STEP(F1, a, b, c, d, in[4] + 0xf57c0faf, 7);
	MD5STEP(F1, d, a, b, c, in[5] + 0x4787c62a, 12);
	MD5STEP(F1, c, d, a, b, in[6] + 0xa8304613, 17);
	MD5STEP(F1, b, c, d, a, in[7] + 0xfd469501, 22);
	MD5STEP(F1, a, b, c, d, in[8] + 0x698098d8, 7);
	MD5STEP(F1, d, a, b, c, in[9] + 0x8b44f7af, 12);
	MD5STEP(F1, c, d, a, b, in[10] + 0xffff5bb1, 17);
	MD5STEP(F1, b, c, d, a, in[11] + 0x895cd7be, 22);
	MD5STEP(F1, a, b, c, d, in[12] + 0x6b901122, 7);
	MD5STEP(F1, d, a, b, c, in[13] + 0xfd987193, 12);
	MD5STEP(F1, c, d, a, b, in[14] + 0xa679438e, 17);
	MD5STEP(F1, b, c, d, a, in[15] + 0x49b40821, 22);

	MD5STEP(F2, a, b, c, d, in[1] + 0xf61e2562, 5);
	MD5STEP(F2, d, a, b, c, in[6] + 0xc040b340, 9);
	MD5STEP(F2, c, d, a, b, in[11] + 0x265e5a51, 14);
	MD5STEP(F2, b, c, d, a, in[0] + 0xe9b6c7aa, 20);
	MD5STEP(F2, a, b, c, d, in[5] + 0xd62f105d, 5);
	MD5STEP(F2, d, a, b, c, in[10] + 0x02441453, 9);
	MD5STEP(F2, c, d, a, b, in[15] + 0xd8a1e681, 14);
	MD5STEP(F2, b, c, d, a, in[4] + 0xe7d3fbc8, 20);
	MD5STEP(F2, a, b, c, d, in[9] + 0x21e1cde6, 5);
	MD5STEP(F2, d, a, b, c, in[14] + 0xc33707d6, 9);
	MD5STEP(F2, c, d, a, b, in[3] + 0xf4d50d87, 14);
	MD5STEP(F2, b, c, d, a, in[8] + 0x455a14ed, 20);
	MD5STEP(F2, a, b, c, d, in[13] + 0xa9e3e905, 5);
	MD5STEP(F2, d, a, b, c, in[2] + 0xfcefa3f8, 9);
	MD5STEP(F2, c, d, a, b, in[7] + 0x676f02d9, 14);
	MD5STEP(F2, b, c, d, a, in[12] + 0x8d2a4c8a, 20);

	MD5STEP(F3, a, b, c, d, in[5] + 0xfffa3942, 4);
	MD5STEP(F3, d, a, b, c, in[8] + 0x8771f681, 11);
	MD5STEP(F3, c, d, a, b, in[11] + 0x6d9d6122, 16);
	MD5STEP(F3, b, c, d, a, in[14] + 0xfde5380c, 23);
	MD5STEP(F3, a, b, c, d, in[1] + 0xa4beea44, 4);
	MD5STEP(F3, d, a, b, c, in[4] + 0x4bdecfa9, 11);
	MD5STEP(F3, c, d, a, b, in[7] + 0xf6bb4b60, 16);
	MD5STEP(F3, b, c, d, a, in[10] + 0xbebfbc70, 23);
	MD5STEP(F3, a, b, c, d, in[13] + 0x289b7ec6, 4);
	MD5STEP(F3, d, a, b, c, in[0] + 0xeaa127fa, 11);
	MD5STEP(F3, c, d, a, b, in[3] + 0xd4ef3085, 16);
	MD5STEP(F3, b, c, d, a, in[6] + 0x04881d05, 23);
	MD5STEP(F3, a, b, c, d, in[9] + 0xd9d4d039, 4);
	MD5STEP(F3, d, a, b, c, in[12] + 0xe6db99e5, 11);
	MD5STEP(F3, c, d, a, b, in[15] + 0x1fa27cf8, 16);
	MD5STEP(F3, b, c, d, a, in[2] + 0xc4ac5665, 23);

	MD5STEP(F4, a, b, c, d, in[0] + 0xf4292244, 6);
	MD5STEP(F4, d, a, b, c, in[7] + 0x432aff97, 10);
	MD5STEP(F4, c, d, a, b, in[14] + 0xab9423a7, 15);
	MD5STEP(F4, b, c, d, a, in[5] + 0xfc93a039, 21);
	MD5STEP(F4, a, b, c, d, in[12] + 0x655b59c3, 6);
	MD5STEP(F4, d, a, b, c, in[3] + 0x8f0ccc92, 10);
	MD5STEP(F4, c, d, a, b, in[10] + 0xffeff47d, 15);
	MD5STEP(F4, b, c, d, a, in[1] + 0x85845dd1, 21);
	MD5STEP(F4, a, b, c, d, in[8] + 0x6fa87e4f, 6);
	MD5STEP(F4, d, a, b, c, in[15] + 0xfe2ce6e0, 10);
	MD5STEP(F4, c, d, a, b, in[6] + 0xa3014314, 15);
	MD5STEP(F4, b, c, d, a, in[13] + 0x4e0811a1, 21);
	MD5STEP(F4, a, b, c, d, in[4] + 0xf7537e82, 6);
	MD5STEP(F4, d, a, b, c, in[11] + 0xbd3af235, 10);
	MD5STEP(F4, c, d, a, b, in[2] + 0x2ad7d2bb, 15);
	MD5STEP(F4, b, c, d, a, in[9] + 0xeb86d391, 21);

	buf[0] += a;
	buf[1] += b;
	buf[2] += c;
	buf[3] += d;
}

void MD5Update(MD5Context_t *ctx, unsigned char const *buf, unsigned int len)
{
	unsigned int t;


	t = ctx->bits[0];
	if ((ctx->bits[0] = t + ((unsigned int)len << 3)) < t)
		ctx->bits[1]++;         /* Carry from low to high */
	ctx->bits[1] += len >> 29;

	t = (t >> 3) & 0x3f;        /* Bytes already in shsInfo->data */

								/* Handle any leading odd-sized chunks */

	if (t)
	{
		unsigned char *p = (unsigned char *)ctx->in + t;

		t = 64 - t;
		if (len < t)
		{
			memcpy(p, buf, len);
			return;
		}
		memcpy(p, buf, t);
		//byteReverse(ctx->in, 16);
		MD5Transform(ctx->buf, (unsigned int *)ctx->in);
		buf += t;
		len -= t;
	}
	/* Process data in 64-byte chunks */

	while (len >= 64)
	{
		memcpy(ctx->in, buf, 64);
		//byteReverse(ctx->in, 16);
		MD5Transform(ctx->buf, (unsigned int *)ctx->in);
		buf += 64;
		len -= 64;
	}

	/* Handle any remaining bytes of data. */
	memcpy(ctx->in, buf, len);
}
void MD5Final(unsigned char digest[MD5_DIGEST_LENGTH], MD5Context_t *ctx)
{
	unsigned count;
	unsigned char *p;

	/* Compute number of bytes mod 64 */
	count = (ctx->bits[0] >> 3) & 0x3F;

	/* Set the first char of padding to 0x80.  This is safe since there is
	always at least one byte free */
	p = ctx->in + count;
	*p++ = 0x80;

	/* Bytes of padding needed to make 64 bytes */
	count = 64 - 1 - count;

	/* Pad out to 56 mod 64 */
	if (count < 8)
	{
		/* Two lots of padding:  Pad the first block to 64 bytes */
		memset(p, 0, count);
		//byteReverse(ctx->in, 16);
		MD5Transform(ctx->buf, (unsigned int *)ctx->in);

		/* Now fill the next block with 56 bytes */
		memset(ctx->in, 0, 56);
	}
	else
	{
		/* Pad block to 56 bytes */
		memset(p, 0, count - 8);
	}
	//byteReverse(ctx->in, 14);

	/* Append length in bits and transform */
	((unsigned int *)ctx->in)[14] = ctx->bits[0];
	((unsigned int *)ctx->in)[15] = ctx->bits[1];

	MD5Transform(ctx->buf, (unsigned int *)ctx->in);
	//byteReverse((unsigned char *) ctx->buf, 4);
	memcpy(digest, ctx->buf, MD5_DIGEST_LENGTH);
	memset(ctx, 0, sizeof(*ctx));        /* In case it's sensitive */
}
unsigned int MD5_PseudoRandom(unsigned int nSeed)
{
	MD5Context_t ctx;
	unsigned char digest[MD5_DIGEST_LENGTH]; // The MD5 Hash

	memset(&ctx, 0, sizeof(ctx));

	MD5Init(&ctx);
	MD5Update(&ctx, (unsigned char*)&nSeed, sizeof(nSeed));
	MD5Final(digest, &ctx);

	return *(unsigned int*)(digest + 6);	// use 4 middle bytes for random value
}
#define F1(x, y, z) (z ^ (x & (y ^ z)))
#define F2(x, y, z) F1(z, x, y)
#define F3(x, y, z) (x ^ y ^ z)
#define F4(x, y, z) (y ^ (x | ~z))
#define M_PI			3.14159265358979323846


//-----------------------------------------------------------------------------
// Purpose: Update context to reflect the concatenation of another buffer full of bytes.
// Input  : *ctx - 
//			*buf - 
//			len - 
//-----------------------------------------------------------------------------
void angvec(const Vector angles, Vector& forward, Vector& right, Vector& up)
{
	float angle;
	static float sr, sp, sy, cr, cp, cy;

	angle = angles.y * (M_PI * 2 / 360);
	sy = sin(angle);
	cy = cos(angle);

	angle = angles.x * (M_PI * 2 / 360);
	sp = sin(angle);
	cp = cos(angle);

	angle = angles.z * (M_PI * 2 / 360);
	sr = sin(angle);
	cr = cos(angle);

	//if (forward)
	//{
	forward.x = cp * cy;
	forward.y = cp * sy;
	forward.z = -sp;
	//}
	//if (right)
	//{
	right.x = (-1 * sr*sp*cy + -1 * cr*-sy);
	right.y = (-1 * sr*sp*sy + -1 * cr*cy);
	right.z = -1 * sr*cp;
	//}
	//if (up)
	//{
	up.x = (cr*sp*cy + -sr * -sy);
	up.y = (cr*sp*sy + -sr * cy);
	up.z = cr * cp;
	//}
}
//-----------------------------------------------------------------------------
// Purpose: Final wrapup - pad to 64-byte boundary with the bit pattern 
// 1 0* (64-bit count of bits processed, MSB-first)
// Input  : digest[MD5_DIGEST_LENGTH] - 
//			*ctx - 
//-----------------------------------------------------------------------------

typedef void(*RandomSeed_t)(UINT);
RandomSeed_t m_RandomSeed = 0;
typedef float(*RandomFloat_t)(float, float);
RandomFloat_t m_RandomFloat;
void RandomSeed(UINT Seed)
{


	if (m_RandomSeed == NULL)
		m_RandomSeed = (RandomSeed_t)GetProcAddress(GetModuleHandle("vstdlib.dll"), "RandomSeed");

	m_RandomSeed(Seed);

	return;
}

enum ItemDefinitionIndex2 : int {
	DEAGLE = 1,
	ELITE = 2,
	FIVESEVEN = 3,
	GLOCK = 4,
	AK47 = 7,
	AUG = 8,
	AWP = 9,
	FAMAS = 10,
	G3SG1 = 11,
	GALILAR = 13,
	M249 = 14,
	M4A1 = 16,
	MAC10 = 17,
	P90 = 19,
	UMP45 = 24,
	XM1014 = 25,
	BIZON = 26,
	MAG7 = 27,
	NEGEV = 28,
	SAWEDOFF = 29,
	TEC9 = 30,
	TASER = 31,
	HKP2000 = 32,
	MP7 = 33,
	MP9 = 34,
	NOVA = 35,
	P250 = 36,
	SCAR20 = 38,
	SG556 = 39,
	SSG08 = 40,
	KNIFE = 42,
	FLASHBANG = 43,
	HEGRENADE = 44,
	SMOKEGRENADE = 45,
	MOLOTOV = 46,
	DECOY = 47,
	INCGRENADE = 48,
	C4 = 49,
	KNIFE_T = 59,
	M4A1_SILENCER = 60,
	USP_SILENCER = 61,
	CZ75A = 63,
	REVOLVER = 64,
	KNIFE_BAYONET = 500,
	KNIFE_FLIP = 505,
	KNIFE_GUT = 506,
	KNIFE_KARAMBIT = 507,
	KNIFE_M9_BAYONET = 508,
	KNIFE_TACTICAL = 509,
	KNIFE_FALCHION = 512,
	KNIFE_BUTTERFLY = 515,
	KNIFE_PUSH = 516,
	KNIFE_BOWIE = 514
};

void ang2vec(const Vector &angles, Vector *forward, Vector *right, Vector *up)
{
	float angle;
	static float sr, sp, sy, cr, cp, cy, cpi = float((M_PI * 2 / 360));

	angle = angles.y * cpi;
	sy = sin(angle);
	cy = cos(angle);
	angle = angles.x * cpi;
	sp = sin(angle);
	cp = cos(angle);
	angle = angles.z * cpi;
	sr = sin(angle);
	cr = cos(angle);

	if (forward)
	{
		forward->x = cp * cy;
		forward->y = cp * sy;
		forward->z = -sp;
	}

	if (right)
	{
		right->x = (-1 * sr*sp*cy + -1 * cr*-sy);
		right->y = (-1 * sr*sp*sy + -1 * cr*cy);
		right->z = -1 * sr*cp;
	}

	if (up)
	{
		up->x = (cr*sp*cy + -sr * -sy);
		up->y = (cr*sp*sy + -sr * cy);
		up->z = cr * cp;
	}
}

float RandFloat(float flLow, float flHigh)
{
	if (m_RandomFloat == NULL)
		m_RandomFloat = (RandomFloat_t)GetProcAddress(GetModuleHandle("vstdlib.dll"), "RandomFloat");

	return m_RandomFloat(flLow, flHigh);
}
void sprdvecang(const Vector &vecForward, Vector &vecAngles)
{
	Vector vecView;
	if (vecForward[1] == 0.f && vecForward[0] == 0.f)
	{
		vecView[0] = 0.f;
		vecView[1] = 0.f;
	}
	else
	{
		vecView[1] = atan2(vecForward[1], vecForward[0]) * 180.f / M_PI;

		if (vecView[1] < 0.f)
			vecView[1] += 360.f;

		vecView[2] = sqrt(vecForward[0] * vecForward[0] + vecForward[1] * vecForward[1]);

		vecView[0] = atan2(vecForward[2], vecView[2]) * 180.f / M_PI;
	}

	vecAngles[0] = -vecView[0];
	vecAngles[1] = vecView[1];
	vecAngles[2] = 0.f;
}

Vector CAntiSpread::SpreadFactor(int seed)
{
	auto GetWavRoll = [](Vector dir) -> float
	{
		Vector forward(1, -dir.x, dir.y);

		Vector up(0, -dir.x, abs(dir.y + (1 / dir.y) + (1 / dir.y)));

		if (dir.x > 0 && dir.y < 0)
			up.y = abs(up.y);
		else if (dir.x < 0 && dir.y < 0)
			up.y = -abs(up.y);

		Vector left = up.Cross(forward);

		float roll = RAD2DEG(atan2f(left.z, (left.y * forward.x) - (left.x * forward.y)));

		return roll;
	};

	Vector vecForward, vecRight, vecDir, vecUp, vecAntiDir;
	float flSpread, flInaccuracy;
	Vector qAntiSpread = Globals::UserCmd->viewangles;


//	glb::mainwep->UpdateAccuracyPenalty();

	flSpread = glb::mainwep->GetSpread();

	flInaccuracy = glb::mainwep->GetInaccuracy();
	if (seed == Globals::UserCmd->random_seed)
	{
		Globals::UserCmd->random_seed = MD5_PseudoRandom(Globals::UserCmd->command_number) & 0x7FFFFFFF;
		RandomSeed((Globals::UserCmd->random_seed & 0xFF) + 1);
	}
	else
	{
		RandomSeed(seed);
	}



	float fRand1 = RandFloat(0.f, 1.f);
	float fRandPi1 = RandFloat(0.f, 2.f * (float)M_PI);
	float fRand2 = RandFloat(0.f, 1.f);
	float fRandPi2 = RandFloat(0.f, 2.f * (float)M_PI);

	float m_flRecoilIndex = glb::mainwep->GetFloatRecoilIndex();


	if (glb::mainwep->WeaponID() == 64)
	{
		if (Globals::UserCmd->buttons & IN_ATTACK2)
		{
			fRand1 = 1.f - fRand1 * fRand1;
			fRand2 = 1.f - fRand2 * fRand2;
		}
	}
	else if (glb::mainwep->WeaponID() == NEGEV && m_flRecoilIndex < 3.f)
	{
		for (int i = 3; i > m_flRecoilIndex; --i)
		{
			fRand1 *= fRand1;
			fRand2 *= fRand2;
		}

		fRand1 = 1.f - fRand1;
		fRand2 = 1.f - fRand2;
	}

	float fRandInaccuracy = fRand1 * glb::mainwep->GetInaccuracy();
	float fRandSpread = fRand2 * glb::mainwep->GetSpread();

	float fSpreadX = cos(fRandPi1) * fRandInaccuracy + cos(fRandPi2) * fRandSpread;
	float fSpreadY = sin(fRandPi1) * fRandInaccuracy + sin(fRandPi2) * fRandSpread;

	ang2vec(Globals::UserCmd->viewangles, &vecForward, &vecRight, &vecUp);

	vecDir.x = (float)((float)(vecRight.x * fSpreadX) + vecForward.x) + (float)(vecUp.x * fSpreadY);
	vecDir.y = (float)((float)(fSpreadX * vecRight.y) + vecForward.y) + (float)(fSpreadY * vecUp.y);
	vecDir.z = (float)((float)(vecRight.z * fSpreadX) + vecForward.z) + (float)(vecUp.z * fSpreadY);

	vecAntiDir = vecForward + (vecRight * -fSpreadX) + (vecUp * -fSpreadY);

	vecAntiDir.NormalizeInPlace();

	//vecAntiDir.z 



	sprdvecang(vecAntiDir, qAntiSpread);

	//qAntiSpread.x += RAD2DEG(atan(sqrt(fSpreadX * fSpreadX + fSpreadY * fSpreadY)));
	//qAntiSpread.z = RAD2DEG(atan2(fSpreadX, fSpreadY));
	return qAntiSpread;
}