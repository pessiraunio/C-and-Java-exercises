#include "opiskelija.h"
#include <iostream>

using std::cout;
using std::endl;

// Staattisen tietojäsnen alustus globaalisti johonkin käännösyksikköön (.cpp) eli missä vaan käännösyksikössä

// konstruktorin perään : mNimi("tuntematon"), mOpiskelijanumero("000000"), mOpintopisteet(0)
//Olisi vanha tapa alustaa 
opiskelija::opiskelija()
{
    //cout << "Opiskelijan oletusrakentaja" << endl;
    mOppilaidenLkm++;
}

opiskelija::opiskelija(const std::string& aNimi,const std::string& aOpiskelijanumero, const int& aOpintopisteet)
    : mNimi(aNimi), mOpiskelijanumero(aOpiskelijanumero), mOpintopisteet(aOpintopisteet)
{
    //cout << "Opiskelijan 2 parametrinen rakentaja" << endl;  
    mOppilaidenLkm++;
}

opiskelija::~opiskelija()
{
    //cout << "Opiskelija " << mNimi << " vapautettu muistista." << endl;
    mOppilaidenLkm--;
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
 // C++ toteutueksessa ei static- avainsanaa (vain esittelyssä)
int opiskelija::getHloLkm() {
    return mOppilaidenLkm;
}

void opiskelija::tulostaTiedot() const
{
    cout << "Nimi: " << mNimi << endl;
    //cout << "Opiskelijanumero: " << mOpiskelijanumero << endl;
    //cout << "Opintopisteet: " << mOpintopisteet << endl;
    //cout << endl << "**********************************" << endl;
    //cout << "Opiskelijaoita " << mOppilaidenLkm << endl;
}