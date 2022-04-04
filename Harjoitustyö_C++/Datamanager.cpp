#include "Datamanager.h"
#include <memory>
#include <string>
#include <iostream>

using namespace std;

Datamanager* Datamanager::instance = nullptr;

Datamanager* Datamanager::getInstance() {
    
    if(instance == nullptr) {
        instance = new Datamanager();
    }
    return instance;
}


Datamanager::Datamanager()
{

}

Datamanager::~Datamanager()
{
    
}

void Datamanager::saveCar(shared_ptr<Cars> &aCarObject)
{
    carObjects.push_back(aCarObject);
}

void Datamanager::getCars(string aMake) {

    if(carObjects.capacity() == 0) {
        cout << "Ei autoja listassa." << endl;
    }
    
    for (auto car : carObjects) {
        if (aMake=="N/A") {
            car->getCarInfo();
        }
        else if(aMake!="N/A" && car->getMake() == aMake) {
            car->getCarInfo();
        }
        else {
            cout << "Merkkia " << aMake << " ei ole listassa. " << endl;
        }
        
    }

}