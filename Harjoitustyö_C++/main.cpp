#include <iostream>
#include "Cars.h"
#include "Datamanager.h"
#include <memory>

using namespace std;


int main() {

    string Make;
    string Model;
    double EngineDisplacement;
    int ManufacturedIn;
    int userInput;

    Datamanager* datamanager = Datamanager::getInstance();

    while(1) {
        cout << "- - - - - - - - - - - - - - \n";
        cout << "Kaikki autot - 1\nHaku merkilla - 2\nLisaa auto - 3\n";
        cin >> userInput;

        if (userInput == 1) {
            datamanager->getCars();
        }
        else if (userInput == 2) {
            cout << "Anna haettavan auton merkki: ";
            cin >> Make;
            datamanager->getCars(Make);
        }
        else if (userInput ==3) {
            cout << "Merkki: ";
            cin >> Make;
            cout << "Malli: ";
            cin >> Model;
            cout << "Moottorin tilavuus desimaalilukuna: ";
            cin >> EngineDisplacement;
            cout << "Valmistusvuosi: ";
            cin >> ManufacturedIn;

            shared_ptr<Cars> car{new Cars{Make, Model, EngineDisplacement, ManufacturedIn}};
            datamanager->saveCar(car);
            cout << Make << " lisatty!" << endl;
        }

    }
   


    return EXIT_SUCCESS;
}