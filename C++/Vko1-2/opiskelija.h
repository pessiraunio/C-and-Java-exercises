//Turki pragma once
#pragma once
#include <string>

using std::string;

//Määritellään opiskleijan rajapinta (API)
class opiskelija {

public:
    //Rakenajat ja purkaja
    opiskelija();
    opiskelija(const string& aNimi, const string& aOpiskelijanumero);
    ~opiskelija(); //Purkaja merkillä ~ kutsutaan automaattisesti, kun olio vapautetaan

    //Metodit (API)
    //C++ sääntö kytä const parametrejä aina jos parametria ei muuteta
    void setNimi(const string& aNimi); //const nimi tässä == parametrinä annettua oliota ei muuteta 
    void setOpiskelijanumero(const string& aOpiskelijanumero);
    void setOpintopisteet(int aOpintopisteet);

    string getNimi() const;
    string getOpiskelijanumero() const;
    int getOpintopisteet() const;

    void tulostaTiedot();

//protected: tarkottaisi, että perivä luokka pääsee käsiksi sen alle luotuihin muuttujiin, ei suositeltaavaa.
private:
    //Tietojäsenet (data, member variables, instance variables) privaatiksi, m alussa = tietojäsen eli memeber variable

    //Jäsenet voidaan joko alustaa täällä tai cpp filessä, useimmin ne alustetaan cpp filessä tämä on vähän modernimpi tapa
    string mNimi = "tuntematon";
    string mOpiskelijanumero = "000000"; 
    int mOpintopisteet = 0;    
};