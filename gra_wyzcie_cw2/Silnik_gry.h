#ifndef SILNIK_GRY_HEADER
#define SILNIK_GRY_HEADER


#include <string>

        class Silnik_gry {
              
              
          protected:
                    
                    bool ** tab_orginal;
                    bool ** tab_tmp;
                    void copy_table() {};
                    void det_analiza() {};
                    std::string reguly;
                    int x;
                    int y;
                    
                    
                    
          public:
					Silnik_gry() {};
					Silnik_gry(int nx, int ny, std::string nreg);
					void Init();
                    void Analiza();
					virtual ~Silnik_gry();
              
              
              
        };




#endif
