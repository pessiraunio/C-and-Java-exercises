public class Osoite {

    private String mKatu;
    private String mPostinumero;
    private String mKunta;

    public Osoite (String aKatu, String aPostinumero, String aKunta) {
        mKatu = aKatu;
        mPostinumero = aPostinumero;
        mKunta = aKunta;
    }

    public void setKatuosoite(String aKatu) {
        mKatu = aKatu;
    }

    public void setPostinumero(String aPostinumero) {
        mPostinumero = aPostinumero;
    }

    public void setKunta(String aKunta) {
        mKunta = aKunta;
    }

    public String getKatuosoite() {
        return mKatu;
    }
    public String getPostinumero() {
        return mPostinumero;
    }
    public String getKunta() {
        return mKunta;
    }
    
    public String tulostaTiedot() {
        String output = ("Katuosoite: " + getKatuosoite() + "\nPostinumero ja toimipaikka: " + getPostinumero() + " " + getKunta());
        return output;
    }
}
