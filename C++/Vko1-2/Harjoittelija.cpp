#include "Harjoittelija.h"

//Tässä käytetty ns. vanhaa tapaa alustaa parametrit konstruktorissa, "uudessa" tavassa ne on alustettu h-filessä
Harjoittelija::Harjoittelija() : opiskelija(), mTyopaikka("tuntematon"), mPalkka(0)
{
}

Harjoittelija::Harjoittelija(const string& aNimi, const string& aOpiskelijanumero, const int& aOpintopisteet, const string& aTyopaikka, const float& aPalkka)
    : opiskelija(aNimi, aOpiskelijanumero, aOpintopisteet), mTyopaikka(aTyopaikka), mPalkka(aPalkka) 
{
    cout << "Harjoittelija olion " << aNimi << " rakentaja " << endl;
}

    //TODO GETTERIT JA SETTERIT
    void Harjoittelija::setTyopaikka(const string& aTyopaikka) {
        mTyopaikka = aTyopaikka;
    }
    void Harjoittelija::setPalkka(const float& aPalkka) {
        mPalkka = aPalkka;
    }

    float Harjoittelija::getPalkka() const {
        return mPalkka;
    }

    string Harjoittelija::getTyopaikka() const {
        return mTyopaikka;
    }


//Tulosta tiedot
void Harjoittelija::tulostaTiedot() const {

    //Voidaan tulostaa myös ensin kantaluokan tulostus esim. "opiskelija::tulostatiedot()"
    cout << "Nimi: " << getNimi() << endl;
    cout << "Opiskelijanumero: " << getOpiskelijanumero() << endl;
    cout << "Opintopisteet: " << getOpintopisteet() << endl;
    cout << "Harjoittelupaikka: " << getTyopaikka() << endl;
    cout << "Palkka: " << getPalkka() << endl;
    cout << endl << "**********************************" << endl;

}
