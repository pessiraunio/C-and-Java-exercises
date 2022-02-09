
public class Henkilo{
    
    private String mNimi;
    private int mIka;
    private Osoite mOsoite;

    public Henkilo ( String aNimi, int aIka) {
        mNimi = aNimi;
        mIka = aIka;
    }
    public Henkilo ( String aNimi, int aIka, Osoite aOsoite) {
        mIka = aIka;
        mNimi = aNimi;
        mOsoite = aOsoite;
    }
    public void setNimi(String aNimi) {
        mNimi = aNimi;
    }
    public void setIka(int aIka) {
        mIka = aIka;
    }
    public void setOsoite(Osoite aOsoite) {
        mOsoite = aOsoite;
    }

    public String getNimi() {
        return mNimi;
    }
    public int getIka() {
        return mIka;
    }
    public Osoite getOsoite() {
        return mOsoite;
    }

    public void tulostaTiedot() {
        //Tulosta hlön tiedot
        System.out.println("Nimi: " + mNimi);
        System.out.println("Ika: " + mIka);

        if (mOsoite != null) {
            mOsoite.tulostaTiedot();
        }
    }
}
