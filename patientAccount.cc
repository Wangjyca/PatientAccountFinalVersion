

#include "PatientAccount.h"
#include <iostream>
#include <cstring>

using namespace std;


void patientAcount::patientsetmenus() {
        char getname[31];
        int getdays;
        float getrate;

        cin.ignore();

        cout << "Patient name: ";
        cin.getline(getname, 30);

        cout<< "Day(s) of inpatient:";
        cin >> getdays;

        cout <<  "Rate per day: ";
        cin >> getrate;

        setname(getname);
        setday(getdays);
        setrate(getrate);

}

void patientAcount::setsurgery() {

        char nameoftype[30];
        float setprice;

        for (int i = 0; i < 5; i++) {
                cin.ignore();
                cout << "Enter No." << i + 1 << " type of surgery:";
                cin.getline(nameoftype, 30);

                surgeries.setsurgeryname(nameoftype, i);

                cout << "Enter price of No." << i + 1 << " type of surgery:";
                cin >> setprice;
                surgeries.setsurgeryprice(setprice, i);
        }

}

void patientAcount::setpharamcies() {

        char nameoftype[30];
        float setprice;

        for (int i = 0; i < 5; i++) {
                cin.ignore();
                cout << "Enter No." << i + 1 << " medication type:";
                cin.getline(nameoftype, 30);

                pharmacies.setsurgeryname(nameoftype, i);

                cout << "Enter price of No." << i + 1 << " medication type:";
                cin >> setprice;
                pharmacies.setsurgeryprice(setprice, i);

	}

}

float patientAcount::pharamciescharge()  {
	float cost = 0.00;

	for (int i = 0; i < 5; i++) {
	 	cost = cost + pharmacies.getsurgeryprice(i);
	 	}
	return cost;
}

float patientAcount::surgeriescharge() {
	float cost = 0.00;

	for (int i = 0; i < 5; i++) {
		cost = cost + surgeries.getsurgeryprice(i);
	}
	return cost;
}


void patientAcount::surgeriesprintlist() {
	for (int i = 0; i < 5; i++) {
		cout << surgeries.getsurgeryname(i) << "	" << surgeries.getsurgeryprice(i) << endl;
	}
}

void patientAcount::pharamciesprintlist() {
	for (int i = 0; i < 5; i++) {
		cout << pharmacies.getsurgeryname(i) << "	" << pharmacies.getsurgeryprice(i) << endl;
	}
}

 
void patientAcount::checkout() {

	cout << "Patient name: " << getname() << endl;
	 cout << "Total charge: " << surgeriescharge() + pharamciescharge() + dayschargeforH() << endl;
	cout << "-------------------------------------" << endl;
	cout << "Inpatient daily charge: " << dayschargeforH() << endl ;
	cout << "Stady day(s):" << getday() << endl;
	cout << "Per rate:" << getrate() << endl;
	cout << "=========================" << endl;
	


	cout << "Surgery charge:" << surgeriescharge()<< endl;
	 surgeriesprintlist();
	cout << "=========================" << endl;
	

	cout << "Pharmacy charge:" << pharamciescharge()<< endl;
	pharamciesprintlist();
	cout << "=========================" << endl;
	
}

 