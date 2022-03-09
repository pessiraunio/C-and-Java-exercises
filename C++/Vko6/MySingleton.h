#pragma once

class MySingleton {
    public:
        static MySingleton* getInstance();
        int getLuku();

        void updateLuku(int aLuku);

    private:
        MySingleton();
        int mLuku = 0;
        static MySingleton* instance;
};