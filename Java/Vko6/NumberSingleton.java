public class NumberSingleton {

    private int mNumber = 0;

    //Luodaan luokka tyyppinen instanssi, 
    //käytännössä luokka olio minkä kautta kaikki tehdään.
    private static NumberSingleton instance;

    public static NumberSingleton getInstance() {
        //Ns Lazy initialization == olio luodaan ja alustetaan, kun sitä tarvitaan
        if (instance == null) {
            // Luodaan instanssi jos sitä ei ole olemassa
            instance = new NumberSingleton();
        }
        return instance;
    }

    //Piilotetaan rakentaja => "private" rakentajaa ei voi 
    //enää kutsua luokan ulkopuolelta eli oliota ei voi luoda ulkopuolella.
    private NumberSingleton() {
        mNumber = 0;
    }

    // Tulostetaan instanssin ("olion") mNumber
    public int getNumber() {
        return mNumber;
    }
    // päivitetään numero
    public void updateNumber (int aNumber) {
        mNumber = aNumber;
    }

}