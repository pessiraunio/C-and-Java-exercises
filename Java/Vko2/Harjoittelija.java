import java.security.GeneralSecurityException;

public class Harjoittelija extends Opiskelija {

    private String mTyopaikka;
    private float mPalkka;

    public Harjoittelija() {
        mTyopaikka = "Tuyntematon";
        mPalkka = 0;

    }
     //Javassa kaikki tapahtuu rungossa, ei ole kaksoispisteitä niinkuin cpp:ssä
    public Harjoittelija(String aNimi, String aOpiskelijanumero, String aTyopaikka, float aPalkka) {
        super (aNimi, aOpiskelijanumero);
        mTyopaikka = aTyopaikka;
        mPalkka = aPalkka;
        System.out.println("Harjoittelijan 4 parametrinen rakentaja");
    }

    // Todo: setterit ja getterit harjoittelijan tiedoilla.
    public void tulostaTiedot() {
        System.out.println("Nimi: " + getNimi());
        System.out.println("Opintopisteet: " + getOpintopisteet());
        System.out.println("Palkka: " + mPalkka); //Tässäkin olisi hyvä käyttää getteriä
    }
}
