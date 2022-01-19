
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
    public Opiskelija(String aNimi, String aOpiskelijanumero) {
        mNimi = aNimi;
        mOpiskelijanumero = aOpiskelijanumero;
    }
    public void setNimi(String aNimi) {
        mNimi = aNimi;
    }
    public void setOpiskelijanumero(String aOpiskelijanumero) {
        mOpiskelijanumero = aOpiskelijanumero;
    }
    public String getNimi() {
        return mNimi;
    }
    public void setOpintopisteet(int aOpintopisteet) {

        mOpintopisteet = aOpintopisteet;
    }

    public void tulostaTiedot() {
        System.out.println("Nimi: " + mNimi);
        System.out.println("Opiskelijanumero: " + mOpiskelijanumero);
        System.out.println("Opintopisteet: " + mOpintopisteet);
    }
}
