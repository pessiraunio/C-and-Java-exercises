#include <iostream>
#include <vector>
#include <string>
#include "Stack.h"
#include "Henkilo.h"

using namespace std;

//Boolean tyyppinen template funktio.
template<typename Template>
bool equals(Template a, Template b) {
    return a==b;
}

int main() {

    Stack<int> luvut;
    luvut.push(20);
    luvut.push(12);
    cout << luvut.pop() << endl; 

    Stack<string> sanat;
    sanat.push("Hei");
    sanat.push("Moi");
    cout << sanat.pop() << endl;

    Stack<double> desimaalit;
    desimaalit.push(2.3);
    desimaalit.push(3.1);
    cout << desimaalit.pop() << endl;

    Stack<char> merkit;
    merkit.push('a');
    merkit.push('@');
    cout << merkit.pop() << endl;
    
    Stack<Henkilo*> oppilaat;
    oppilaat.push(new Henkilo("Mauri"));
    cout << oppilaat.pop() << endl; // Tulostuu olion osoite
    cout << oppilaat.pop()->getNimi() << endl; // Tulostuu osoitteessa olevan olion nimi
    /*
    //Testattavat muuttujat
    int a = 2;
    int b = 3;
    int c = 2;
    string d = "Moi";
    string e = "Moi";
    string f = "Hei";
    double g = 2.1;
    double h = 2.1;
    double i = 4.3;

    //Array templaten funktiokutsuista eri arvoilla
    bool arr [6] = {equals(a, b), equals(a, c), equals(d, e), equals(d, f), equals(g, h), equals(i, h)};
    //Tulostetaan parametrien tulos
    for(bool func : arr) {
        if (func) {
            cout << "Parameters are equal!" << endl;
        }
        else {
            cout << "Parameters are NOT equal!" << endl;
        }
    }*/
    return EXIT_SUCCESS;
}