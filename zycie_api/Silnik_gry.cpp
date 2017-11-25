#include "Silnik_gry.h"
#include <iostream>
#include <string>
#include <fstream>

Silnik_gry::Silnik_gry(int nx, int ny, std::string nreg)
{

	x = nx;
	y = ny;

	tab_orginal = new bool *[ny];
	tab_tmp = new bool *[nx];


	for (int i = 0;i < ny;i++) {


		tab_orginal[i] = new bool[nx];
		tab_tmp[i] = new bool[nx];

	}


	for (int i = 0;i < x;i++) {


		for (int j = 0;j < y;j++) {


			tab_orginal[i][j] = false;
			tab_tmp[i][j] = false;


		}


	}


	reguly = nreg;


}

void Silnik_gry::Init()
{

	std::string wyj = "nie";
	int xx, yy;


	while (wyj == "nie") {

		std::cout << "Podaj x " << std::endl;
		std::cin >> xx;
		std::cout << "Podaj y " << std::endl;
		std::cin >> yy;
		std::cout << "Koniec ? tak / nie" << std::endl;
		
		tab_orginal[xx][yy] = true;

		std::cin >> wyj;


	}

}


void Silnik_gry::Init(int je , int dw , int trz, int czt , int pt , int szc) {
	
	
	tab_orginal[je][dw] = true;
	tab_orginal[trz][czt] = true;
	tab_orginal[pt][szc] = true;
	
}




void Silnik_gry::Init(std::string nazwa) {
	
int ile=0;
int pom;
int pom1;


std::fstream plik(nazwa);


plik >> ile;


for(int i=0; i<ile;i++) {
	
	
	
	plik>>pom;
	plik>>pom1;
	
	
	tab_orginal[pom][pom1] = true;
	
	
}


	
	
}




void Silnik_gry::Analiza()
{


	for (int i = 0;i < x;i++) {


		for (int j = 0; j < y;j++) {


			int ilosc = 0;



			// **************** WIERSZ = 0 START


			if (i == 0) {


				if (j == 0) {

					if (tab_orginal[i][j] == false) {


						if (tab_orginal[i][j + 1] == true) ilosc++;
						if (tab_orginal[i + 1][j] == true) ilosc++;
						if (tab_orginal[i + 1][j + 1] == true) ilosc++;

						if (ilosc == 3) {
							
							tab_tmp[i][j] = true;
						
						}


					}


					if (tab_orginal[i][j] == true) {


						if (tab_orginal[i][j + 1] == true) ilosc++;
						if (tab_orginal[i + 1][j] == true) ilosc++;
						if (tab_orginal[i + 1][j + 1] == true) ilosc++;

						if (ilosc == 2 || ilosc == 3)
						{
							tab_tmp[i][j] = true;
						}
						if (ilosc < 2)
						{
							tab_tmp[i][j] = false;
						}
						if (ilosc >= 4)
						{
							tab_tmp[i][j] = false;
						}


					}


				}



				else if (j == y-1) {





					if (tab_orginal[i][j] == false) {


						if (tab_orginal[i][j - 1] == true) ilosc++;
						if (tab_orginal[i + 1][j] == true) ilosc++;
						if (tab_orginal[i + 1][j - 1] == true) ilosc++;

						if (ilosc == 3) {

							tab_tmp[i][j] = true;

						}


					}


					if (tab_orginal[i][j] == true) {


						if (tab_orginal[i][j - 1] == true) ilosc++;
						if (tab_orginal[i + 1][j] == true) ilosc++;
						if (tab_orginal[i + 1][j - 1] == true) ilosc++;

						if (ilosc == 2 || ilosc == 3)
						{
							tab_tmp[i][j] = true;
						}
						if (ilosc < 2)
						{
							tab_tmp[i][j] = false;
						}
						if (ilosc >= 4)
						{
							tab_tmp[i][j] = false;
						}


					}



				}


				else {

					if (tab_orginal[i][j] == false)
					{
						if (tab_orginal[i][j - 1] == true) ilosc++;

						if (tab_orginal[i + 1][j - 1] == true) ilosc++;

						if (tab_orginal[i + 1][j] == true) ilosc++;

						if (tab_orginal[i][j + 1] == true) ilosc++;

						if (tab_orginal[i + 1][j + 1] == true) ilosc++;

						if (ilosc == 3)
						{
							tab_tmp[i][j] = true;
						}
					}





					if (tab_orginal[i][j] == true) {

						if (tab_orginal[i][j - 1] == true) ilosc++;

						if (tab_orginal[i + 1][j - 1] == true) ilosc++;

						if (tab_orginal[i + 1][j] == true) ilosc++;

						if (tab_orginal[i][j + 1] == true) ilosc++;

						if (tab_orginal[i + 1][j + 1] == true) ilosc++;

						if (ilosc == 2 || ilosc == 3)
						{
							tab_tmp[i][j] = true;
						}
						if (ilosc < 2)
						{
							tab_tmp[i][j] = false;
						}
						if (ilosc >= 4)
						{
							tab_tmp[i][j] = false;
						}
					}


				}


			}

			// **************** WIERSZ = 0 KONIEC

















			// **************** WIERSZ = OSTATNI START


			else if (i == x-1) {


				if (j == 0) {

					if (tab_orginal[i][j] == false) {


						if (tab_orginal[i][j + 1] == true) ilosc++;
						if (tab_orginal[i - 1][j] == true) ilosc++;
						if (tab_orginal[i - 1][j + 1] == true) ilosc++;

						if (ilosc == 3) {

							tab_tmp[i][j] = true;

						}


					}


					if (tab_orginal[i][j] == true) {


						if (tab_orginal[i][j + 1] == true) ilosc++;
						if (tab_orginal[i - 1][j] == true) ilosc++;
						if (tab_orginal[i - 1][j + 1] == true) ilosc++;

						if (ilosc == 2 || ilosc == 3)
						{
							tab_tmp[i][j] = true;
						}
						if (ilosc < 2)
						{
							tab_tmp[i][j] = false;
						}
						if (ilosc >= 4)
						{
							tab_tmp[i][j] = false;
						}


					}


				}



				else if (j == y-1) {





					if (tab_orginal[i][j] == false) {


						if (tab_orginal[i][j - 1] == true) ilosc++;
						if (tab_orginal[i - 1][j] == true) ilosc++;
						if (tab_orginal[i - 1][j - 1] == true) ilosc++;

						if (ilosc == 3) {

							tab_tmp[i][j] = true;

						}


					}


					if (tab_orginal[i][j] == true) {


						if (tab_orginal[i][j - 1] == true) ilosc++;
						if (tab_orginal[i - 1][j] == true) ilosc++;
						if (tab_orginal[i - 1][j - 1] == true) ilosc++;

						if (ilosc == 2 || ilosc == 3)
						{
							tab_tmp[i][j] = true;
						}
						if (ilosc < 2)
						{
							tab_tmp[i][j] = false;
						}
						if (ilosc >= 4)
						{
							tab_tmp[i][j] = false;
						}


					}



				}


				else {

					if (tab_orginal[i][j] == false)
					{
						if (tab_orginal[i][j - 1] == true) ilosc++;

						if (tab_orginal[i - 1][j - 1] == true) ilosc++;

						if (tab_orginal[i - 1][j] == true) ilosc++;

						if (tab_orginal[i][j + 1] == true) ilosc++;

						if (tab_orginal[i - 1][j + 1] == true) ilosc++;

						if (ilosc == 3)
						{
							tab_tmp[i][j] = true;
						}
					}





					if (tab_orginal[i][j] == true) {

						if (tab_orginal[i][j - 1] == true) ilosc++;

						if (tab_orginal[i - 1][j - 1] == true) ilosc++;

						if (tab_orginal[i - 1][j] == true) ilosc++;

						if (tab_orginal[i][j + 1] == true) ilosc++;

						if (tab_orginal[i - 1][j + 1] == true) ilosc++;

						if (ilosc == 2 || ilosc == 3)
						{
							tab_tmp[i][j] = true;
						}
						if (ilosc < 2)
						{
							tab_tmp[i][j] = false;
						}
						if (ilosc >= 4)
						{
							tab_tmp[i][j] = false;
						}
					}


				}


			}

			// **************** WIERSZ = OSTATNI KONIEC














			// **************** LEWA PIERWSZA KOLUMNA START


			else if (j == 0 && i > 0 && i < x-1) {



				if (tab_orginal[i][j] == false)
				{

					if (tab_orginal[i - 1][j] == true) ilosc++;

					if (tab_orginal[i + 1][j] == true) ilosc++;

					if (tab_orginal[i - 1][j + 1] == true) ilosc++;

					if (tab_orginal[i][j + 1] == true) ilosc++;

					if (tab_orginal[i + 1][j + 1] == true) ilosc++;

					if (ilosc == 3)
					{
						tab_tmp[i][j] = true;
					}
				}





				if (tab_orginal[i][j] == true) {

					if (tab_orginal[i - 1][j] == true) ilosc++;

					if (tab_orginal[i + 1][j] == true) ilosc++;

					if (tab_orginal[i - 1][j + 1] == true) ilosc++;

					if (tab_orginal[i][j + 1] == true) ilosc++;

					if (tab_orginal[i + 1][j + 1] == true) ilosc++;

					if (ilosc == 2 || ilosc == 3)
					{
						tab_tmp[i][j] = true;
					}
					if (ilosc < 2)
					{
						tab_tmp[i][j] = false;
					}
					if (ilosc >= 4)
					{
						tab_tmp[i][j] = false;
					}
				}









			}


			// **************** LEWA PIERWSZA KOLUMNA KONIEC















			// **************** PRAWA OSTATNIA KOLUMNA START


			else if (j == y-1 && i > 0 && i < x-1) {



				if (tab_orginal[i][j] == false)
				{

					if (tab_orginal[i - 1][j] == true) ilosc++;

					if (tab_orginal[i + 1][j] == true) ilosc++;

					if (tab_orginal[i - 1][j - 1] == true) ilosc++;

					if (tab_orginal[i][j - 1] == true) ilosc++;

					if (tab_orginal[i + 1][j - 1] == true) ilosc++;

					if (ilosc == 3)
					{
						tab_tmp[i][j] = true;
					}
				}





				if (tab_orginal[i][j] == true) {

					if (tab_orginal[i - 1][j] == true) ilosc++;

					if (tab_orginal[i + 1][j] == true) ilosc++;

					if (tab_orginal[i - 1][j - 1] == true) ilosc++;

					if (tab_orginal[i][j - 1] == true) ilosc++;

					if (tab_orginal[i + 1][j - 1] == true) ilosc++;

					if (ilosc == 2 || ilosc == 3)
					{
						tab_tmp[i][j] = true;
					}
					if (ilosc < 2)
					{
						tab_tmp[i][j] = false;
					}
					if (ilosc >= 4)
					{
						tab_tmp[i][j] = false;
					}
				}









			}


			// **************** PRAWA OSTATNIA KOLUMNA KONIEC









			else {






				if (tab_orginal[i][j] == false)
				{
					if (tab_orginal[i][j - 1] == true) ilosc++;

					if (tab_orginal[i - 1][j] == true) ilosc++;

					if (tab_orginal[i - 1][j - 1] == true) ilosc++;

					if (tab_orginal[i + 1][j - 1] == true) ilosc++;

					if (tab_orginal[i + 1][j] == true) ilosc++;

					if (tab_orginal[i - 1][j + 1] == true) ilosc++;

					if (tab_orginal[i][j + 1] == true) ilosc++;

					if (tab_orginal[i + 1][j + 1] == true) ilosc++;

					if (ilosc == 3)
					{
						tab_tmp[i][j] = true;
					}
				}





				if (tab_orginal[i][j] == true) {

					if (tab_orginal[i][j - 1] == true) ilosc++;

					if (tab_orginal[i - 1][j] == true) ilosc++;

					if (tab_orginal[i - 1][j - 1] == true) ilosc++;

					if (tab_orginal[i + 1][j - 1] == true) ilosc++;

					if (tab_orginal[i + 1][j] == true) ilosc++;

					if (tab_orginal[i - 1][j + 1] == true) ilosc++;

					if (tab_orginal[i][j + 1] == true) ilosc++;

					if (tab_orginal[i + 1][j + 1] == true) ilosc++;

					if (ilosc == 2 || ilosc == 3)
					{
						tab_tmp[i][j] = true;
					}
					if (ilosc < 2)
					{
						tab_tmp[i][j] = false;
					}
					if (ilosc >= 4)
					{
						tab_tmp[i][j] = false;
					}
				}




			}


		}


	}


	for (int i = 0;i < x;i++) {


		for (int j = 0;j < y;j++) {


			tab_orginal[i][j] = tab_tmp[i][j];


		}


	}



}

Silnik_gry::~Silnik_gry()
{


	for (int i = 0;i < y;i++) {


		delete[] tab_tmp[i];
		delete[] tab_orginal[i];

	}


	delete[]tab_tmp;
	delete[]tab_orginal;


}
