#include "MySingleton.h"
#include <iostream>

using namespace std;

// Määritellään tyhjään MySingleton luokkaosoittimeen instanssi luokasta MySingleton
MySingleton* MySingleton::instance = nullptr;


// Tarkistetaan onko instanssia vielä luotu ja luodaan jos ei ole
MySingleton* MySingleton::getInstance(){

if (instance == nullptr) {
    instance = new MySingleton();
    }

    return instance;
}

MySingleton::MySingleton() {
    //Singletonin private rakentaja
}

int MySingleton::getLuku() {
    return mLuku;
}

void MySingleton::updateLuku(int aLuku) {

    mLuku = aLuku;
    cout << "Luku paivitetty:  " << mLuku << endl;
}




