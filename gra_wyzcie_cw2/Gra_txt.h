#ifndef GRA_TXT_HEADER
#define GRA_TXT_HEADER


#include <string>
#include "Gra.h"

        class Gra_txt: public Gra {
                    
                    
          public:
                 
					virtual void View();
					Gra_txt(int nx, int ny, std::string nreg) :Gra(nx, ny, nreg) {}
              
              
              
        };




#endif
