#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    //Luodaan lambda
    auto helloWorldLambda = []() {
        cout << "Hello World!" << endl;
    };
    // Suoritetaan lambda
    helloWorldLambda();

    auto helloNlambda = [] (int n) {
        for (int i=0; i<n; i++) {
            cout << "Hello World!" << endl;
        }
    };
    helloNlambda(5);

    int times = 4;
    auto helloNlambdaMod = [&] () { // auto helloNlambdaMod = [=, &x] () { == KAIKKI MUUT ARVONA PAITSI X VIITTEENÄ.
        for (int i=0; i<times; i++) {
            cout << "Hello World!" << endl;
        }
    };
    helloNlambdaMod();

    vector<string> nimet = {"Tony", "Pekka", "Maija", "Ari"}; //nimilista

    // Verataan lambda funktiossa kahden string kirjainen järjestystä A-Z.
    auto sortByName = [] (string a, string b) {
        return a < b;
    };
    // Verrataan lambda funktiossa kahden string merkkijonon pituutta
    auto sortByLength = [] (string a, string b) {
        return a.length() < b.length();
    };

    //Järjestetään listan ensimmäisestä listan viimeiseen asti käyttäen sortByName lambda -funktiota.
    sort(nimet.begin(), nimet.end(), sortByName);

    // Tulostetaan järjestetyt nimet
     for(string s : nimet) {
        cout << s << endl;
    }

    //Järjestetään listan ensimmäisestä listan viimeiseen asti käyttäen sortByLength lambda -funktiota.
    sort(nimet.begin(), nimet.end(), sortByLength);

    for(string s : nimet) {
        cout << s << endl;
    }

    return EXIT_SUCCESS;
}