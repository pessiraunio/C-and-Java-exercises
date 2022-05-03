#include <string>

using namespace std;

class Henkilo {
    public:
        Henkilo();
        Henkilo(string aNimi);
        ~Henkilo();
        void setNimi(string aNimi);
        string getNimi();


    private:
        string mNimi = "";
};