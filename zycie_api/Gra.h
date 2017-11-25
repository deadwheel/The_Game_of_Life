#ifndef GRA_HEADER
#define GRA_HEADER


#include "Silnik_gry.h"

        class Gra: public Silnik_gry {
                                  
                    
          public:
			Gra(int nx, int ny, std::string nreg) :Silnik_gry(nx, ny, nreg) {}
			void Start() { system("cls"); View(); while (1) { Analiza(); View(); } }
                    virtual void View();
                    
                    
              
              
              
        };




#endif
