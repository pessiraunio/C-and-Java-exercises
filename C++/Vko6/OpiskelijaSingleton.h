#pragma once
#include <iostream>
#include <vector>
#include "opiskelija.h"

using std::vector;


class OpiskelijaSingleton {

    public:
        static OpiskelijaSingleton* getInstance();
        void lisaaOpiskelija(opiskelija* oppilas);
        void haeOpiskelija(string aNimi);
        void tulostaOpiskelijat();
        


    private:
        OpiskelijaSingleton();
        ~OpiskelijaSingleton();
        static OpiskelijaSingleton* instance;
        
};