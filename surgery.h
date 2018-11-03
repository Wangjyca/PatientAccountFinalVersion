#ifndef SURGERY_H
#define SURGERY_H
#include <cstring>
#include <iostream>
#include <string>
using namespace std;


class surgery {
private:
        string surgerytype[5];
        float surgeryprice[5];

public:


        surgery() {
                for (int i = 0; i < 5; i++) {
                        surgerytype[i] = "";
                        surgeryprice[i] = 0.00;
                }

        }


        ~surgery() {
    
        }

        string getsurgeryname(int index) const {
                return surgerytype[index];
        }

        float getsurgeryprice(int index) const{
                return surgeryprice[index];
        }

        void setsurgeryname(char* settype, int index) {
                           surgerytype[index] = settype;
        }

        void setsurgeryprice(float setprice, int index) {

                surgeryprice[index] = setprice;
        }

        //void setsurgery();




};


#endif






#endif