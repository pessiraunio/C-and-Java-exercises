#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Pelaaja {

public:

    void setName() {

        mNimi = "Moro ukko";
    }
    void setPlayerid() {

        mPlayerid = "12312";
    }
    void setPlayerlvl() {

        mPlayerlvl = 10;
    }

    void showPlayerInfo() {

        cout << "Player information " << "Nimi: " << mNimi << "ID: " << mPlayerid << "Lvl: " << mPlayerlvl << endl;
    }



private:

    std::string mNimi = "N/A";
    std::string mPlayerid = "000000";
    int mPlayerlvl = 0;

};




int main() {


    Pelaaja Player1;

    //Player1.setName();
    //Player1.setPlayerlvl();
    //Player1.setPlayerid();
    
    Player1.showPlayerInfo();

    return 0;
}