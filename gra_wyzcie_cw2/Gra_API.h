#pragma once

#ifndef GRA_API_HEADER
#define GRA_API_HEADER



#include <string>
#include "Gra.h"
#include <Windows.h>

class Gra_API : public Gra {


private:
	HDC _hdc;
	HWND _hwnd;
	HBRUSH _BgBrush;
	HBRUSH _MyBrush;


public:

	virtual void View();
	void InitAPI(HWND hwnd) { _hdc = GetDC(hwnd); _hwnd = hwnd; _BgBrush = ::CreateSolidBrush(0x00fff000); _MyBrush = ::CreateSolidBrush(0x00000fff);
	}
	Gra_API(int nx, int ny, std::string nreg) :Gra(nx, ny, nreg) {}


	


		/*
		
		(HBRUSH)SelectObject(_hdc, _BgBrush)
		
		Rectangle(_hdc,i*dx,j*dy,i*dx+dx)
		
		*/



};




#endif
