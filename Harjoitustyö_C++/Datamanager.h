#pragma once
#include <vector>
#include <memory>
#include "Cars.h"

using namespace std;

class Datamanager {

public:
    static Datamanager* getInstance();
    void saveCar(shared_ptr<Cars> &aCarObject);
    void getCars(string Make="N/A");


//Constructors privated for instance class
private:
    Datamanager();
    ~Datamanager();
    // Vector of Cars-type shared pointers.
    vector<shared_ptr<Cars>> carObjects;
    static Datamanager* instance;

};