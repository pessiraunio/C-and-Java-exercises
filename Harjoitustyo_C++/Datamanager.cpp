#include "Datamanager.h"
#include <memory>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

Datamanager* Datamanager::instance = nullptr;

//Creating an instance of class.
Datamanager* Datamanager::getInstance() {

    if(instance == nullptr) {
        instance = new Datamanager();
    }
    return instance;
}

Datamanager::Datamanager()
{
    //Constructor
}
Datamanager::~Datamanager()
{
    //Deconstructor
}

void Datamanager::saveCar(shared_ptr<Cars> &aCarObject)
{
    carObjects.push_back(aCarObject);
}

void Datamanager::getCars(string aMake) {
    if(carObjects.size() == 0) {
        cout << "Ei autoja listassa." << endl;
    }
    //Loop through the list and return all cars of find one by searching with the provided make.
    for (auto car : carObjects) {
        if (aMake=="N/A") {
            car->getCarInfo();
        }
        else if(aMake!="N/A" && car->getMake() == aMake) {
            car->getCarInfo();
        }
        else if(aMake!=car->getMake() && car == carObjects.back()){
            cout << "Merkkia " << aMake << " ei ole listassa. " << endl;
        }   
    }
}

void Datamanager::deleteByMake(string aMake) {
    try {
       if(carObjects.size() != 0) {
        }
        else {
            throw("Error: ");
        }
    }
    catch (...) {
        cout << "Ei autoja listassa." << endl;
    }
    int index = 0;
    //Tracking car in carObjects by index
    for (auto car : carObjects) {
        //if car is found & car list is more than 0
        if(car->getMake() == aMake && carObjects.size() > 0) {
            carObjects.erase(carObjects.begin() + index);
            cout << aMake << " poistettu listasta!" << endl;
            break;
        }
        //if car is not found & the car in question is at the end of list.
        else if(aMake!=car->getMake() && car == carObjects.back()){
            cout << "Merkkia " << aMake << " ei ole listassa. " << endl;
            break;
        }
        //If there is only one car in list, proceed to clear list after erase.
        else if (carObjects.size() == 1) {
            carObjects.erase(carObjects.begin() + index);
            cout << car->getMake() << " poistettu listasta!" << endl;
            carObjects.clear();
            break;
        }
        index++;
    }
}

void Datamanager::updateByMake(string aMake) {

    int userInput;
    string Make;
    string Model;
    double engineDispl;
    int ManufacturedIn;

    if(carObjects.size() == 0) {
        cout << "Ei autoja listassa." << endl;
    }
    
    //Loop through the list and return all cars of find one by searching with the provided make.
    for (auto car : carObjects) { //if no search make is assigned, return car info.
        if (aMake=="N/A") {
            car->getCarInfo();
        }
        else if(aMake!="N/A" && car->getMake() == aMake) { //If car is found and make is assigned get car info
            while(1) {
                cout << "Paivitettava tieto" << endl;
                cout << "Merkki - 1\nMalli - 2\nMoottorin tilavuus - 3\nValmistusvuosi - 4\n";
                cin >> userInput;

                if (userInput == 1) {
                    cout << "Anna uusi merkki: ";
                    cin >> Make;
                    car->setMake(Make);
                    cout << "Merkki paivitetty!" << endl;
                    break;
                }
                else if (userInput == 2) {
                    cout << "Anna uusi malli: ";
                    cin >> Model;
                    car->setModel(Model);
                    cout << "Malli paivitetty!" << endl;
                    break;

                }
                else if (userInput == 3) {
                    cout << "Anna uusi tilavuus: ";
                    cin >> engineDispl;
                    car->setEngineDisplacement(engineDispl);
                    cout << "Tilavuus paivitetty!" << endl;
                    break;

                }
                else if (userInput == 4) {
                    cout << "Anna uusi valmistusvuosi: ";
                    cin >> ManufacturedIn;
                    car->setManufacturingYear(ManufacturedIn);
                    cout << "Valmistusvuosi paivitetty!" << endl;
                    break;
                }
                else {
                    cout << "***Syota numerovalinta***" << endl;
                    cin.clear();
                    while (cin.get() != '\n') ;
                }
            }
        }
        else if(aMake!=car->getMake() && car == carObjects.back()) {
            cout << "Merkkia " << aMake << " ei ole listassa. " << endl;
        }   
    }
}