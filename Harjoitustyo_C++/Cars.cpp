#include "Cars.h"
#include <string>
#include <iostream>

using std::string;
using namespace std;

Cars::Cars()
    {   
    // Constructor
}
Cars::Cars(const string &aMake, const string &aModel, const double &aEngineDispl, const int &aManufacYear)
    : mMake{aMake}, mModel{aModel}, mEngineDispl{aEngineDispl}, mManufacYear{aManufacYear}
    {
    // Parametric constructor
}
Cars::~Cars()
    {
    // Deconstructor
}
// Class methods
void Cars::setMake(const string &aMake) {
    mMake = aMake;
}
void Cars::setModel(const string &aModel) {
    mModel = aModel;
}
void Cars::setEngineDisplacement(const double &aEngineDispl) {
    mEngineDispl = aEngineDispl;
}
void Cars::setManufacturingYear(const int &aManfacYear) {
    mManufacYear = aManfacYear;
}
string Cars::getMake() {
    return mMake;
}

void Cars::getCarInfo() {
    cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ " << endl;
    cout << "Make: " << mMake << endl;
    cout << "Model: " << mModel << endl;
    cout << "Engine Displacement: " << mEngineDispl << endl;
    cout << "Manufactured in: " << mManufacYear << endl;
}