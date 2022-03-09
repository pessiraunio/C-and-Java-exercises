public class NumberSingleton {

    private int mNumber = 0;
    private static NumberSingleton instance;

    public static NumberSingleton getInstance() {
        //Ns Lazy initialization == olio luodaan ja alustetaan, kun sitä tarvitaan
        if (instance == null) {
            instance = new NumberSingleton();
        }
        return instance;
    }

    //Piilotetaan rakentaja => rakentajaa ei voi enää kutsua
    private NumberSingleton() {
        mNumber = 0;
    }

    public int getNumber() {
        return mNumber;
    }

    public void updateNumber (int aNumber) {
        mNumber = aNumber;
    }

}