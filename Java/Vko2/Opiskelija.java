
public class Opiskelija {
    //Tietojäsenet alkuun
    private String mNimi;
    private String mOpiskelijanumero;
    private int mOpintopisteet;
    // Kuuntelija- interface muuttujaan
    private Kuuntelija mKuuntelija = null;

    private static int mOppilaidenLkm = 0; //Luodaan luokkamuuttuja, eli luokkakohtainen, ei luokasta luodun olion.

    public Opiskelija() {
        mNimi = "tuntematon";
        mOpiskelijanumero = "XXXXX";
        mOpintopisteet = 0;

        mOppilaidenLkm++; //Kasvatetaan henkilöiden lukumäärää kutsuttaessa luokan rakentajaa
    }
    //Kaikki olioparametrit ovat viitteitä
    public Opiskelija(String aNimi, String aOpiskelijanumero, int aOpintopisteet) {
        mNimi = aNimi;
        mOpiskelijanumero = aOpiskelijanumero;
        mOpintopisteet = aOpintopisteet;

        mOppilaidenLkm++;

        //System.out.println("Opiskelijan "+ mNimi + " 3 parametrinen rakentaja");
    }

    //Asetetaan annettu kuuntelija luokan kuuntelijamuuttujaan
    public void setKuuntelija(Kuuntelija aKuuntelija) {
        mKuuntelija = aKuuntelija;
    }

    public void setNimi(String aNimi) {
        if (aNimi != mNimi) { //Jos tiedot ovat muuttuneet..
            mNimi = aNimi;
            //Kutsutaan listenerClass luokan toteutusta metodista
            mKuuntelija.tiedotMuuttuneet(mNimi);
        }
        mNimi = aNimi;
    }
    public void setOpiskelijanumero(String aOpiskelijanumero) {
        if (aOpiskelijanumero != mOpiskelijanumero) {
            mOpiskelijanumero = aOpiskelijanumero;
            mKuuntelija.tiedotMuuttuneet(mOpiskelijanumero);
        }
        mOpiskelijanumero = aOpiskelijanumero;
    }
    public void setOpintopisteet(int aOpintopisteet) {
        if (aOpintopisteet != mOpintopisteet) {
            mOpintopisteet = aOpintopisteet;
            mKuuntelija.opMuuttuneet(mOpintopisteet);
        }
        mOpintopisteet = aOpintopisteet;
    }
    public String getNimi() {
        return mNimi;
    }
    public String getOpiskelijanumero() {
        return mOpiskelijanumero;
    }
    public int getOpintopisteet() {
        return mOpintopisteet;
    }

    public void tulostaTiedot() {
        System.out.println("Nimi: " + mNimi);
        System.out.println("Opiskelijanumero: " + mOpiskelijanumero);
        System.out.println("Opintopisteet: " + mOpintopisteet);

    }
    // Oppilaiden määrän palauttava metodi.
    public void oppilaidenMaara() {
        System.out.println("Oppilaita luotu: " + mOppilaidenLkm);

    }
}
