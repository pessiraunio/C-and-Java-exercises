#pragma once
#include <iostream> 
#include <string>

using std::string;
 
class osoite {

    public:
        osoite();
        osoite(const string& aKatu, const string& aKunta);
        ~osoite();
        void tulostaOsoite() const;
        void setKatu(const string& aKatu);
        void setKunta(const string& aKunta);

    private:
        string mKatu = "n/a";
        string mKunta = "n/a";
 };