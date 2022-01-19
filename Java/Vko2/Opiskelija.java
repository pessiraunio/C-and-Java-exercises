public class Opiskelija {
    //Tietojäsenet alkuun
    private String mNimi;
    private String mOpiskelijanumero;
    private int mOpintopisteet;

    public Opiskelija() {
        mNimi = "tuntematon";
        mOpiskelijanumero = "XXXXX";
        mOpintopisteet = 0;
    }
    //Kaikki olioparametrit ovat viitteitä
    public Opiskelija(String aNimi, String aOpiskelijanumero, int aOpintopisteet) {
        mNimi = aNimi;
        mOpiskelijanumero = aOpiskelijanumero;
        mOpintopisteet = aOpintopisteet;

        System.out.println("Opiskelijan "+ mNimi + " 3 parametrinen rakentaja");
    }

    public void setNimi(String aNimi) {
        mNimi = aNimi;
    }
    public void setOpiskelijanumero(String aOpiskelijanumero) {
        mOpiskelijanumero = aOpiskelijanumero;
    }
    public void setOpintopisteet(int aOpintopisteet) {
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
}
