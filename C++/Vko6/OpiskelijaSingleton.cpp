#include "OpiskelijaSingleton.h"
#include "opiskelija.h"
#include <iostream>

using namespace std;

//Luokan instanssin alustus
OpiskelijaSingleton* OpiskelijaSingleton::instance = nullptr;
// Luokan tietojäseneksi tallenttu opiskelija olio vektori nimeltä oppilaat
vector<opiskelija*> oppilaat;

// Instanssin luomiseen metodi
OpiskelijaSingleton* OpiskelijaSingleton::getInstance() {

    if (instance == nullptr) {
    instance = new OpiskelijaSingleton();
    }

    return instance;
}
//Rakentaja
OpiskelijaSingleton::OpiskelijaSingleton() {
}
//Purkaja
OpiskelijaSingleton::~OpiskelijaSingleton() {
}

//Opiskelijan lisäys oppilaisiin, parametrina opiskelija olion osoitin
void OpiskelijaSingleton::lisaaOpiskelija(opiskelija* oppilas) {
    //Lisätään vektorin loppuun syötetty olio
    oppilaat.push_back(oppilas);

}
//Haetaan opiskelija nimen perusteella
void OpiskelijaSingleton::haeOpiskelija(string aNimi) {
    //Pyydetään jokaiselta oliolta nimi ja verrataan sitä attribuuttiin
    //Käydään läpi jokainen opiskelija olioon osoittava osoitin
    for (auto &oppilas : oppilaat) {
        string name = oppilas->getNimi();
        if (name == aNimi) {
            cout << "Oppilas loytyi! "<< endl;
            //Oppilaan löytyessä tulostetaan tiedot
            oppilas->tulostaTiedot();
        }
        else {
            cout << "Ei oppilasta nimelta " << aNimi << endl;
        }
    }
}
//Tulostetaan tiedot jokaisen oppilaat vektorin opiskelijan olion metodilla tulostaTiedot.
void OpiskelijaSingleton::tulostaOpiskelijat() {
    // auto = ei tarvitse itse määrittää tyyppiä, ( ei meinaan ollu "opiskelija")
    for (auto &oppilas : oppilaat) {
        oppilas->tulostaTiedot();
    }
}