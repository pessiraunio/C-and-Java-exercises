#include <iostream>
#include "opiskelija.h"
#include "Harjoittelija.h"

using std::endl;
using std::cout;

//to compile: g++ opiskelija.cpp main.cpp Harjoittelija.cpp -o main

//staattisen muuttujan alustus
int opiskelija::mHolkLkm = 0;

//Prosessin suoritus alkaa main() -funktiosta
int main() {

    //Tulostetaan heti alkun opikselijoiden lukumäärä ennen ensimmäisen opiskelijan luontia
    cout << "Opiskelijoita " << opiskelija::getHloLkm() << endl;

    if (true) {
         opiskelija olli ("Olli", "020020", 101);
        cout << opiskelija::getHloLkm() << endl;
        olli.tulostaTiedot();

        } // Olli ja maija vapautetaan


        cout << "Opiskelijoita " << opiskelija::getHloLkm() << endl;
    /*
    opiskelija olli ("Olli", "020020", 101);
    cout << opiskelija::getHloLkm() << endl;
    olli.tulostaTiedot();
    */

    //Luodaan opiskelija stackiin (automaattiseti vapautettava)
    // Sama asia voidaan kirjoittaa myös: opiskelija Kalle{"Kalle", "12345"}
    opiskelija kalle = opiskelija("Kalle", "12345", 100);
    kalle.tulostaTiedot();

    //Luodaan harjoittelija stackiin
    Harjoittelija rampe = Harjoittelija("Rampe", "23141", 180, "Nokia", 2400);
    //Tulostetaan rampen tiedot
    rampe.tulostaTiedot();

    //Molemmissa stack tapauksissa opiskelijalta perittävää deconstructoria käytetään kun lohkosta poistutaan
    //Tässä tapauksessa main-lohkosta
    

    //Luodaan opsikelija heapiin (Dynaamista muistinhallintaa)
    opiskelija* ville = new opiskelija("Ville", "33223", 160); //new tekee muistinvarauksen ja palauttaa muistiosoitteen
    ville->tulostaTiedot();
    delete ville; //ville vapautetaan tässä

    //Luodaan harjoittelija heapiin
    Harjoittelija* jesse = new Harjoittelija("Jesse", "35511", 100, "Gofore", 2000);
    jesse->tulostaTiedot();
    delete jesse; //jesse vapautetaan tässä


    opiskelija* make = new Harjoittelija("Make", "23123", 200, "lidl", 1000);
    make->tulostaTiedot();
    delete make;

    return 0;
} //Kalle ja kaikki lohkon sisältä vapautetaan, eli kalle ja "a" vapautetaan stackista
    //Jos Kalle luotaisiin esimerkiksi if lause lohkossa se vapautettaisiin sen lohkon päätyttyä mutta näkyisi sen lohkos sisällä alle, esimerkiksi silmukoissa.