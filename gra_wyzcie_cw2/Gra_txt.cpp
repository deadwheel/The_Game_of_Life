#include "Gra_txt.h"
#include <iostream>
#include <Windows.h>

void Gra_txt::View()
{

	for (int i = 0;i < x;i++) {


		for (int j = 0; j < y;j++) {


			if (tab_orginal[i][j] == true) std::cout << "* ";
			else std::cout << "o ";


		}


		std::cout << std::endl;


	}

	HANDLE xd;

	xd = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD c;
	c.X = 0;
	c.Y = 0;
	SetConsoleCursorPosition(xd, c);
	Sleep(1500);


}
