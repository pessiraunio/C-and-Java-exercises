#pragma once

class MySingleton {
    // Osoitin MySingeltonin getInstance metodille.
    public: //Public metodit instanssista käytettäväksi getLuku, getInstance, ja updateLuku
        static MySingleton* getInstance();
        int getLuku();

        void updateLuku(int aLuku);

    //Luokan private rakentaja, luku ja staattinen luokkakohtainen instanssi
    private:
        MySingleton();
        int mLuku = 0;
        static MySingleton* instance;
};