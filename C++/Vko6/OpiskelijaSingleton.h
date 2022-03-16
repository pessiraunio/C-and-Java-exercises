#pragma once
#include <iostream>
#include <vector>
#include "opiskelija.h"

using std::vector;


class OpiskelijaSingleton {

    // public alustukset metodeille.
    public:
        static OpiskelijaSingleton* getInstance();
        void lisaaOpiskelija(opiskelija* oppilas);
        void haeOpiskelija(string aNimi);
        void tulostaOpiskelijat();
        

    // private alustukset rakentajille ja Luokan instanssille.
    private:
        OpiskelijaSingleton();
        ~OpiskelijaSingleton();
        static OpiskelijaSingleton* instance;
        
};