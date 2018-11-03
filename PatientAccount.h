

#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

//#include "Pharmacy.h"
#include "surgery.h"
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

class patientAcount {
private:
        string name;
        int days;
        float rate;
        surgery surgeries;
        surgery pharmacies;

public:
        // constructor
        patientAcount() {
                name = "ABC";
                days = 0;
                rate = 2000.00;

                //surgeries.surgery_init();
                //pharmacies.surgery_init();
        }

        //destructor
        ~patientAcount() {

        }


        void setday(int setday) {
                days = setday;
        }

        void setname(string setname) {
                name = setname;
        }

        void setrate(int setrate) {
                rate = setrate;
        }

        const int getday() const {
                return days;
        }

        const string getname() const {
                return name;
        }

        const float getrate() const {
                return rate;
        }


        float dayschargeforH() const {
                return rate*days;
        }


	float pharamciescharge() ;
	float  surgeriescharge();

	void setpharamcies();
	void setsurgery();
	
	void  patientsetmenus();
	void  surgeriesprintlist();
	void  pharamciesprintlist();
	void checkout();
};


#endif
