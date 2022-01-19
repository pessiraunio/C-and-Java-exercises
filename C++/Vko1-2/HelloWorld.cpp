#include <iostream>
#include "opiskelija.h"
#include "Harjoittelija.h"

using std::endl;
using std::cout;

//to compile: g++ opiskelija.cpp HelloWorld.cpp -o helloworld jne all cpp files

//Prosessin suoritus alkaa main() -funktiosta
int main() {

    //Maijalla on kaikki oman ja perittvän luokan metodit
    Harjoittelija maija = Harjoittelija("Maija", "23232", "Vincit", 2000);
    maija.tulostaTiedot();
    maija.getNimi();

    int a = 10;
    //Luodaan opiskelija stackiin (automaattiseti vapautettava)
    // Sama asia voidaan kirjoittaa myös: opiskelija Kalle{"Kalle", "12345"}
    opiskelija kalle = opiskelija("Kalle", "12345");
    kalle.tulostaTiedot();
    

    //Luodaan opsikelija heapiin (Dynaamista muistinhallintaa)
    opiskelija* ville = new opiskelija("Ville", "33223"); //new tekee muistinvarauksen ja palauttaa muistiosoitteen
    ville->tulostaTiedot();
    delete ville; //ville vapautetaan tässä


    cout << "Moro" << endl;

    return 0;
} //Kalle ja kaikki lohkon sisältä vapautetaan, eli kalle ja "a" vapautetaan stackista
    //Jos Kalle luotaisiin esimerkiksi if lause lohkossa se vapautettaisiin sen lohkon päätyttyä mutta näkyisi sen lohkos sisällä alle, esimerkiksi silmukoissa.