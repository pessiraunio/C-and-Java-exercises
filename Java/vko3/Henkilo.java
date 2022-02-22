
public class Henkilo{
    
    private String mNimi;
    private String mIka;
    private Osoite mOsoite;

    public Henkilo ( String aNimi, String aIka) {
        mNimi = aNimi;
        mIka = aIka;
    }
    public Henkilo ( String aNimi, String aIka, Osoite aOsoite) {
        mIka = aIka;
        mNimi = aNimi;
        mOsoite = aOsoite;
    }
    public void setNimi(String aNimi) {
        mNimi = aNimi;
    }
    public void setIka(String aIka) {
        mIka = aIka;
    }
    public void setOsoite(Osoite aOsoite) {
        mOsoite = aOsoite;
    }

    public String getNimi() {
        return mNimi;
    }
    public String getIka() {
        return mIka;
    }
    public Osoite getOsoite() {
        return mOsoite;
    }

    public String tulostaTiedot() {
        String h_tiedot = ("Nimi: " + mNimi + " Ika: " + mIka + " ");

        if (mOsoite != null) {
            h_tiedot = (h_tiedot + mOsoite.tulostaTiedot());
        }
        return h_tiedot;
    }
}
