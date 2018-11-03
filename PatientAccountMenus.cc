

#include "PatientAccount.h"
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
void displayMenu();

int main()
{
        patientAcount  anpatient;
        //anpatient.patientAcounts_init();

        char choice; // Menu selection

                                 // Set numeric output formatting.
        cout << fixed << showpoint << setprecision(2);

        do
        {
                // Display the menu and get a valid selection.
                displayMenu();
                cin >> choice;
                while (toupper(choice) < 'A' || toupper(choice) > 'G')
                {
                        cout << "Please make a choice in the range "
                                << "of A through E:";
                        cin >> choice;
                }

                // Process the user's menu selection.
                switch (choice)
                {
                case 'a':
                case 'A':
                         anpatient.patientsetmenus();
                        break;
                case 'b':
                case 'B':
                        anpatient.setsurgery();
                        break;
                case 'c':
                case 'C':
                        anpatient.setpharamcies();  //setpharamcies
                        break;
                case 'd':
                case 'D':
                         anpatient.checkout() ;
                        break;


                }
        } while (toupper(choice) != 'E');

        return 0;
}





		void displayMenu()
		{
			cout << "\n MENU\n";
			cout << "-----------------------------------------\n";
			cout << "A) Patient Account setting\n";
			cout << "B) Patient Surgery Information setting\n";
			cout << "C) Patient Pharmacy Information setting\n";
			cout << "D) Patient Check Out\n";
			cout << "E) Exit \n";

		} 