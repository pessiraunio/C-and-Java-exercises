#include "osoite.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

osoite::osoite() {

}

osoite::osoite(const string& aKatu, const string& aKunta)
: mKatu(aKatu), mKunta(aKunta) {   
}

osoite::~osoite() {

}

void osoite::setKatu(const string &aKatu) {
    mKatu = aKatu;
}

void osoite::setKunta(const string &aKunta) {
    mKunta = aKunta;
}

void osoite::tulostaOsoite() const {
    cout << "Osoite: " << mKatu << ", " << mKunta << endl;

}