#pragma once
#include <string>

using std::string;

class Cars {

public:
    Cars();
    Cars(const string &aMake, const string &aModel, const double &aEngineDispl, const int &aManufacYear);
    ~Cars();
    void setMake(const string &aMake);
    void setModel(const string &aModel);
    void setEngineDisplacement(const double &aEngineDispl);
    void setManufacturingYear(const int &aManuYear);

    string getMake();
    void getCarInfo();
    
    

private:
    string mMake = {"N/A"};
    string mModel = {"N/A"};
    double mEngineDispl = {0.0};
    int mManufacYear = {0};

};