#pragma once
#include <iostream>
#include "opiskelija.h"

using std::string;
using std::endl;
using std::cout;

//Periytyminen C++:ssa
class Harjoittelija : public opiskelija 
{

public:
    //Rakentaja, purkaja
    Harjoittelija();
    Harjoittelija(const string& aNimi, const string& aOpiskelijanumero, const string& aTyopaikka, float aPalkka);

    //Muut metodit
    //TODO: Toteuta metodit

    //Uudelleemääritelty aliluokan metodi == override englanniksi
    void tulostaTiedot() const;
private:
    string mTyopaikka;
    float mPalkka;

};