#include "MySingleton.h"


MySingleton* MySingleton::instance = nullptr;

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
}




