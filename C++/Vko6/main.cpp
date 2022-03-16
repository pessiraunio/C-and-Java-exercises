#include <iostream>
#include <vector>
//#include "MySingleton.h"
#include "OpiskelijaSingleton.h"
#include "opiskelija.h"

using namespace std;
int opiskelija::mOppilaidenLkm = 0;

int main() {

    int selection = 0;
    string name;
    string id;
    int credit;

    OpiskelijaSingleton* op_singleton = OpiskelijaSingleton::getInstance();

    while(1) {
        cout << "Tervetuloa - paina 4 sulkeaksesi ohjelman.\n1-Lisaa henkilo\n2-hae henkilo nimella\n3-listaa kaikki henkilot." << endl;
        cin >> selection;

        if (selection==1) {
            opiskelija* opiskelijaOsoitin;
            cout << "Nimi: ";
            cin >> name;
            cout << "Opiskelijanro: ";
            cin >> id;
            cout << "Opintopistet ";
            cin >> credit;

            opiskelija temp(name, id, credit);

            opiskelijaOsoitin =  &temp;
            op_singleton->lisaaOpiskelija(opiskelijaOsoitin);
        }
        else if (selection==2) {
            cout << "Haettavan nimi: ";
            cin >> name;
            op_singleton->haeOpiskelija(name);
        }
        else if (selection==3) {
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


    // MySingleton tyyppiseen osoittimeen MySingleton luokan metodin get instance avulla instanssi luokasta
    //MySingleton* singleton = MySingleton::getInstance();

    //singleton->updateLuku(9);
    //singleton->updateLuku(3);

    return 0;
}