#include "opiskelija.h"
#include <iostream>

using std::cout;
using std::endl;

// konstruktorin perään : mNimi("tuntematon"), mOpiskelijanumero("000000"), mOpintopisteet(0)
//Olisi vanha tapa alustaa 
opiskelija::opiskelija()
{
    cout << "Opiskelijan oletusrakentaja" << endl;
}

opiskelija::opiskelija(const std::string& aNimi,const std::string& aOpiskelijanumero)
    : mNimi(aNimi), mOpiskelijanumero(aOpiskelijanumero), mOpintopisteet(0)
{
    cout << "Opiskelijan 2 parametrinen rakentaja" << endl;  
}

opiskelija::~opiskelija()
{
    cout << "Opiskelija " << mNimi << " vapautettu muistista." << endl;
}

void opiskelija::setNimi(const std::string& aNimi)
{
    mNimi = aNimi;
}

void opiskelija::setOpiskelijanumero(const std::string& aOpiskelijanumero)
{
    mOpiskelijanumero = aOpiskelijanumero;
}

void opiskelija::setOpintopisteet(int aOpintopisteet)
{
    mOpintopisteet = aOpintopisteet;
}

string opiskelija::getNimi() const {
    return mNimi;
}
string opiskelija::getOpiskelijanumero() const {
    return mOpiskelijanumero;
}
int opiskelija::getOpintopisteet() const{
    return mOpintopisteet;
}

void opiskelija::tulostaTiedot() 
{
    cout << "Nimi: " << mNimi << endl;
    cout << "Opiskelijanumero: " << mOpiskelijanumero << endl;
    cout << "Opintopisteet: " << mOpintopisteet << endl;
}