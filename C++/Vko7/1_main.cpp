#include <iostream>
#include "opiskelija.h"
#include <vector>
#include <memory>

using namespace std;


int opiskelija::mOppilaidenLkm = 0;

int main() {

    opiskelija pasi{"Pasi", "12312", 123, osoite{"Katu", "Tampere"}};
    pasi.tulostaTiedot();
    
    //Vektorillinen osoittimia.
    vector<shared_ptr<opiskelija>> osoitinOppilaat;

    // Luodaan oliot 
    shared_ptr<opiskelija> pauli(new opiskelija {"Pauli", "12312", 123, osoite{"Katu", "Turku"}});
    osoitinOppilaat.push_back(pauli);

    shared_ptr<opiskelija>pau(new opiskelija {"Pau", "12312", 411});
    osoitinOppilaat.push_back(pau);

    shared_ptr<opiskelija>make(new opiskelija {"Make", "12345", 122});
    osoitinOppilaat.push_back(make);

    shared_ptr<opiskelija> jesse ( new opiskelija {"Jesse", "55553", 113, osoite{"Teisko", "Turku"}});
    osoitinOppilaat.push_back(jesse);

    for (auto oppilas : osoitinOppilaat) {
        oppilas->tulostaTiedot();
    }

    //Tyhjennetään vektori
    osoitinOppilaat.clear();


    return EXIT_SUCCESS;
}

