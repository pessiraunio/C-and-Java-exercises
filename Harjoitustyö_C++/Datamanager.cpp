#include "Datamanager.h"
#include <memory>
#include <string>
#include <iostream>

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

    if(carObjects.capacity() == 0) {
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