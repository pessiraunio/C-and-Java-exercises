#include <iostream>
#include <memory>

#include "opiskelija.h"

using namespace std;

int opiskelija::mOppilaidenLkm = 0;

int main() {

    //C++ älykkäät osoittimet
        //unique_ptr (ei voida kopioida)
        //shered_ptr ( käytetään, jos osoittimia pitää kopioida)
        //weak_ptr

    //Kun ville unique_ptr vapautuu muistista, se automaattisesti poistaa sen takana olleen heap solun, 
    // tässä tapauksessa opiskelija villen.
    unique_ptr<opiskelija> ville( new opiskelija{"Ville", "12312", 123});
    ville->tulostaTiedot();

    shared_ptr<opiskelija> jake( new opiskelija{"Jake", "45555", 231});
    jake->tulostaTiedot();

    //Kopioidaan jake toiseen shared_pointeriin.
    if (true) {

        shared_ptr<opiskelija> x = jake;
    }

    return EXIT_SUCCESS;
} // unique_ptr ville poistuu stackista, kutsuu deleteä villelle.