#include <iostream>
#include "opiskelija.h"

using namespace std;


int opiskelija::mOppilaidenLkm = 0;

int main() {

    opiskelija pasi("Pasi", "12312", 123, osoite("Katu", "Tampere"));
    pasi.tulostaTiedot();
    
    {
        opiskelija x = pasi;
        x.tulostaTiedot();
    }

    pasi.tulostaTiedot();
    
    return EXIT_SUCCESS;
}

