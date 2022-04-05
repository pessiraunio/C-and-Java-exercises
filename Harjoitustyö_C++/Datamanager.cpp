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
        cout << "car: " << car;
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
        cout << "car: " << car;
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