public class Harjoittelija extends Opiskelija {

    private String mTyopaikka;
    private float mPalkka;

    public Harjoittelija() {
        mTyopaikka = "Tuntematon";
        mPalkka = 0;

    }
     //Javassa kaikki tapahtuu rungossa, ei ole kaksoispisteitä niinkuin cpp:ssä
    public Harjoittelija(String aNimi, String aOpiskelijanumero, int aOpintopisteet, String aTyopaikka, float aPalkka) {
        super (aNimi, aOpiskelijanumero, aOpintopisteet);
        mTyopaikka = aTyopaikka;
        mPalkka = aPalkka;
        System.out.println("Harjoittelijan " + aNimi + " 5 parametrinen rakentaja");
    }

    public String getTyopaikka() {
        return mTyopaikka;
    }

    public float getPalkka() {
        return mPalkka;
    }

    // Todo: setterit ja getterit harjoittelijan tiedoilla.
    public void tulostaTiedot() {
        System.out.println("Nimi: " + getNimi());
        System.out.println("Opintopisteet: " + getOpintopisteet());
        System.out.println("Opiskelijanumero: " + getOpiskelijanumero());
        System.out.println("Tyopaikka: " + getTyopaikka());
        System.out.println("Palkka: " + getPalkka());
    }
}
