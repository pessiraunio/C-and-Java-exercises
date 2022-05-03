#include "Henkilo.h"

Henkilo::Henkilo() {

}

Henkilo::Henkilo(string aNimi) {
    mNimi = aNimi;
}

Henkilo::~Henkilo() {

}

void Henkilo::setNimi(string aNimi) {
    mNimi = aNimi;
}

string Henkilo::getNimi() {
    return mNimi;
}