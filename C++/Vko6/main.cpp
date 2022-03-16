#include <iostream>
#include <vector>
//#include "MySingleton.h"
#include "OpiskelijaSingleton.h"
#include "opiskelija.h"

using namespace std;
int opiskelija::mOppilaidenLkm = 0;

int main() {
    //Muuttujia käyttöliittymää varten
    int selection = 0;
    string name;
    string id;
    int credit;

    //Luokka tyyppinen osoitin
    OpiskelijaSingleton* op_singleton = OpiskelijaSingleton::getInstance();

    while(1) {
        cout << "Tervetuloa - paina 4 sulkeaksesi ohjelman.\n1-Lisaa henkilo\n2-hae henkilo nimella\n3-listaa kaikki henkilot." << endl;
        cin >> selection;

        if (selection==1) {
            // Luodaan opiskelija tyyppinen osoitin
            opiskelija* opiskelijaOsoitin;
            cout << "Nimi: ";
            cin >> name;
            cout << "Opiskelijanro: ";
            cin >> id;
            cout << "Opintopistet ";
            cin >> credit;
            // luodaan osoittimeen opiskelija olio syötetyillä arvoilla
            opiskelija temp(name, id, credit);
            // tallennetaan luodun olion referenssi osoittimeen
            opiskelijaOsoitin =  &temp;
            //Singleton luokan metodilla lisätään opiskelija olion osoitin vektoriin
            op_singleton->lisaaOpiskelija(opiskelijaOsoitin);
        }
        else if (selection==2) {
            cout << "Haettavan nimi: ";
            cin >> name;
            // Singleton luokan metodilla etsitään nimellä
            op_singleton->haeOpiskelija(name);
        }
        else if (selection==3) {
            // Singleton luokan metodilla tulostetaan kaikki
            op_singleton->tulostaOpiskelijat();
        }
        else if (selection==4) {
            return 0;
        }
        else {
            cout << "Invalid input." << endl;
            return 0;
        }


    }

    //MySingleton tyyppiseen osoittimeen MySingleton luokan metodin get instance avulla instanssi luokasta
    //MySingleton* singleton = MySingleton::getInstance();

    //singleton->updateLuku(9);
    //singleton->updateLuku(3);

    return 0;
}