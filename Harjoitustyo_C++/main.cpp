#include <iostream>
#include "Cars.h"
#include "Datamanager.h"
#include <memory>

using namespace std;

int main() {

    //Variables for catching user input for UI.
    string Make;
    string Model;
    double EngineDisplacement;
    int ManufacturedIn;
    int userInput;

    //Creating an instance of Datamanager for updating car list.
    Datamanager* datamanager = Datamanager::getInstance();

    // Loop for user input
    while(1) {
        cout << "- - - - - - - - - - - - - - \n";
        cout << "Kaikki autot - 1\nHaku merkilla - 2\nLisaa auto - 3\nPoista auto - 4\nPaivita auton tiedot - 5\n";
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
            while(1) {
                cout << "Moottorin tilavuus desimaalilukuna: ";
                if (cin >> EngineDisplacement) {
                    break;
                }
                else {
                    cout << "Syota arvo numeerisena." << endl;
                    cin.clear();
                    while (cin.get() != '\n') ;
                }
            }
            
            while(1) {
                cout << "Valmistusvuosi: ";
                if (cin >> ManufacturedIn) {
                    break;
                }
                else {
                    cout << "Syota arvo numeerisena." << endl;
                    cin.clear();
                    while (cin.get() != '\n') ;
                }
            }
            cin.clear();

            shared_ptr<Cars> car{new Cars{Make, Model, EngineDisplacement, ManufacturedIn}};
            datamanager->saveCar(car);
            cout << Make << " lisatty!" << endl;
        }
        else if(userInput == 4) {
            cout << "Anna poistettavan auton merkki: ";
            cin >> Make;
            datamanager->deleteByMake(Make);
        }
        else if(userInput == 5) {
            cout << "Anna paivitettavan auton merkki: ";
            cin >> Make;
            datamanager->updateByMake(Make);
        }
        else {
            cout << "***Syota numerovalinta***" << endl;
            cin.clear();
            while (cin.get() != '\n') ;
        }

    }

    return EXIT_SUCCESS;
}