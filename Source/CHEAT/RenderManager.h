#pragma once

#include "Interfaces.h"

#include "Vector2D.h"

void Quad();


namespace Render
{
	void dwqhfuiwehfuiewgbfrendera();
	void sruzrfweiufhuwei();
	void Initialise();

	void Clear(int x, int y, int w, int h, Color color);
	void Outline(int x, int y, int w, int h, Color color);
	void text(int x, int y, const char * _Input, int font, Color color);
	void DrawTexturedPoly(int n, Vertex_t * vertice, Color col);
	void DrawFilledCircle(Vector2D center, Color color, float radius, float points);
	void Line(int x, int y, int x2, int y2, Color color);
	void PolyLine(int *x, int *y, int count, Color color);
	void DrawOutlinedRect(int x, int y, int w, int h, Color col);
	void DrawLine(int x0, int y0, int x1, int y1, Color col);
	void Polygon(int count, Vertex_t* Vertexs, Color color);
	void PolygonOutline(int count, Vertex_t* Vertexs, Color color, Color colorLine);
	void PolyLine(int count, Vertex_t* Vertexs, Color colorLine);

	void GradientV(int x, int y, int w, int h, Color c1, Color c2);
	void DrawCircle(float x, float y, float r, float segments, Color color);
	void GradientH(int x, int y, int w, int h, Color c1, Color c2);

	namespace Fonts
	{
		extern DWORD Default;
		extern DWORD Menu;
		extern DWORD indicator;
		extern DWORD menushit;
		extern DWORD icons;
		extern DWORD MenuBold;
		extern DWORD ESP;
		extern DWORD panelinfo;
		extern DWORD MenuText;
		extern DWORD Icon;
		extern DWORD MenuTabs;
		extern DWORD Text;
		extern DWORD Slider;
		extern DWORD Clock;
		extern DWORD Tabs;
		extern DWORD otheresp;

	};

	void Text(int x, int y, Color color, DWORD font, const char* text);
	void Textf(int x, int y, Color color, DWORD font, const char* fmt, ...);
	void Text(int x, int y, Color color, DWORD font, const wchar_t* text);
	RECT GetTextSize(DWORD font, const char* text);

	RECT get_text_size(const char * _Input, int font);

	bool WorldToScreen(Vector &in, Vector &out);
	RECT GetViewport();
	void DrawRect(int x, int y, int w, int h, Color col);
};

