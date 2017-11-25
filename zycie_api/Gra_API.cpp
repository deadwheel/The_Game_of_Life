#include "Gra_API.h"
#include <Windows.h>

void Gra_API::View()
{

	static int dx=15;
	static int dy = 15;

	for (int i = 0; i < x; i++) {


		for (int j = 0; j < y; j++) {


			if (tab_orginal[i][j] == true) (HBRUSH)SelectObject(_hdc, _BgBrush);
			else (HBRUSH)SelectObject(_hdc, _MyBrush);


			Rectangle(_hdc, i*dx, j*dy, i*dx + dx, j*dy + dy);

		}


	}
	
	
	Sleep(1500);

}
