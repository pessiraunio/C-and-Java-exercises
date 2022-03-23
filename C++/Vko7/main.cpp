#include <iostream>
#include "opiskelija.h"

using namespace std;

void perinteinenfoo( int x ) {
    //perinteinenfoo(x); Kutsuisi vain itseään uudelleen ja uudelleen ja stack täyttyisi heti, stack overflow
    return;
}

void foo() {
    //Muistivuoto esimerkki
    opiskelija* ville = new opiskelija("Ville", "123123", 123);
    ville->tulostaTiedot();

    if (true) {
        //jtn tapahtuuu...
        //ja palautetaan funkitosta jolloin plokin jälkeinen delete jää suorittamatta
        //Tällöin new:llä varattu muisti jää vapauttamatta = memory leak 
        return;
    }

    delete ville;
}

int opiskelija::mOppilaidenLkm = 0;

int main() {

    //Varaa stack muistiin paikan
    //int a = 10;

    //Ohjelmalohkon sisälle
    {
    int a = 10;
    int b = 20;
    opiskelija* tero = new opiskelija("Tero", "12312", 123);

    tero->tulostaTiedot();

    delete tero; // vapautus ohjelmoijan vastuulla
    //Ilman deleteä tero olio jäisi heap muistiin kummittelemaan ilman osoitinta, jonka avulla siihen pääsisi käsiksi.

    } //stack on automamaattinen, blokin jälkeen a, b ja tero vapautetaan.

    //Ilman new:tä, eli stack muistiin
    //opiskelija olli("Olli", "123123", 123);

    /*Tämä koodiplokki ajettuna täyttää heapin
    while(true) {
        new int(12);
    }
    */

    //Pyydetään new:llä oliolle paikka heapistä
    opiskelija* olli = new opiskelija("Olli", "123123", 123);

    // Ambersand tulostaa heapissa olevan olioon osoittavan osoittimen muistipaikan stackista
    cout << olli << endl;
    //Ilman ambersandia tulostuu muistipaikka heapin muistipaikan, jossa olio sijaitsee
    //cout << tero << endl;

    //cout << a << endl;
    //cout << &b << endl;

    
    if (true) {
        int b = 20;
    }

    int c = 10;

    return EXIT_SUCCESS;
}