#include "Harjoittelija.h"


Harjoittelija::Harjoittelija() : opiskelija(), mTyopaikka("tuntematon"), mPalkka(0)
{
}

Harjoittelija::Harjoittelija(const string& aNimi, const string& aOpiskelijanumero, const string& aTyopaikka, float aPalkka)
    : opiskelija(aNimi, aOpiskelijanumero), mTyopaikka(aTyopaikka), mPalkka(aPalkka) 
{
    cout << "Harjoittelijan rakentaja " << endl;
}

    //TODO GETTERIT JA SETTERIT


//Tulosta tiedot
void Harjoittelija::tulostaTiedot() const {

    //Voidaan tulostaa myös ensin kantaluokan tulostus esim. "opiskelija::tulostatiedot()"
    cout << "Nimi: " << getNimi() << endl;
    cout << "Opintopisteet: " << getOpintopisteet() << endl;
    cout << "Harjoittelupaikka: " << mTyopaikka << endl;
    cout << "Palkka: " << mPalkka << endl;

}
