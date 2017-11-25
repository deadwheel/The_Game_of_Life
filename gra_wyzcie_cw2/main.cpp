#include <cstdlib>
#include <iostream>
#include "Silnik_gry.h"
#include "Gra.h"
#include "Gra_txt.h"

using namespace std;

int main(int argc, char *argv[])
{
    
	Gra_txt faf(20,20,"23/3");
	faf.Init();
	faf.Start();
	//faf.View();
    system("PAUSE");
    return EXIT_SUCCESS;
}
