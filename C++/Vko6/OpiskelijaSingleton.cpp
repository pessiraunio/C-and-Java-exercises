#include "OpiskelijaSingleton.h"
#include "opiskelija.h"
#include <iostream>

using namespace std;

OpiskelijaSingleton* OpiskelijaSingleton::instance = nullptr;
vector<opiskelija*> oppilaat;

OpiskelijaSingleton* OpiskelijaSingleton::getInstance() {

    if (instance == nullptr) {
    instance = new OpiskelijaSingleton();
    }

    return instance;
}

OpiskelijaSingleton::OpiskelijaSingleton() {
}

OpiskelijaSingleton::~OpiskelijaSingleton() {

}

void OpiskelijaSingleton::lisaaOpiskelija(opiskelija* oppilas) {
    oppilaat.push_back(oppilas);

}

void OpiskelijaSingleton::haeOpiskelija(string aNimi) {
    for (auto &oppilas : oppilaat) {
        string name = oppilas->getNimi();
        if (name == aNimi) {
            cout << "Oppilas loytyi! "<< endl;
            oppilas->tulostaTiedot();
        }
        else {
            cout << "Ei oppilasta nimelta " << aNimi << endl;
        }
    }

    
}

void OpiskelijaSingleton::tulostaOpiskelijat() {
    // auto = ei tarvitse itse määrittää tyyppiä, ( ei meinaan ollu "opiskelija")
    for (auto &oppilas : oppilaat) {
        oppilas->tulostaTiedot();
    }
}