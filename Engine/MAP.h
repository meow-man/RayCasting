#pragma once

#include <iostream>
#include "Graphics.h"

class MAP
{
private:

	std::wstring m_map;
	int m_mapDimension;

	bool mapSet = false;

public:

	wchar_t getMapPosChar(int x,int y) const; // integral coords of the map - m_map[x][y]

	//TODO : implement this function
	void Draw(int x, int y, double px, double py, double angle, Graphics& gfx) const; //Pixel location on screen

	MAP() = default;
	MAP(const MAP&) = default;
	MAP& operator=(const MAP&) = default;
	MAP(const std::wstring& map, const int dim);
	~MAP();
};

