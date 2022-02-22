import java.util.ArrayList;
import java.util.Scanner;

import javax.swing.JFrame;

public class Tietojenhallinta extends Kayttoliittyma {

    private static String mNimi;
    private static String mIka;
    private static String mKatu;
    private static String mPostinumero;
    private static String mKunta;
    private static ArrayList<Henkilo> henkilot = new ArrayList<Henkilo>();
    private static Scanner sc = new Scanner(System.in);

    public Tietojenhallinta(String aNimi, String aIka, String aKatu, String aPostinumero, String aKunta) {
        mNimi = aKatu;
        mIka = aIka;
        mKatu = aKatu;
        mPostinumero = aPostinumero;
        mKunta = aKunta;
    }
    
    
    
    public static void lisaaHenkilo() {
        
        mNimi = mNimi_f.getText();
        mIka = mIka_f.getText();
        mKatu = mOsoite_f.getText();
        mPostinumero = mPostinumero_f.getText();
        mKunta = mKunta_f.getText();
            
        henkilot.add(new Henkilo(mNimi, mIka,(new Osoite(mKatu,mPostinumero,mKunta))));

        System.out.println("Henkilö " + mNimi + " lisätty!");
    }

    public static void tulostaHenkilot() {
        if (henkilot.size() == 0) {
            prompt.setText("Listassa ei ole vielä henkilöitä");
            return;
        }
        for (Henkilo h : henkilot ) {
            mTulostus_a.setText(h.tulostaTiedot());
        }
    }

    public static void poistaHenkilo() {
        if (henkilot.size() == 0) {
            prompt.setText("Listassa ei ole vielä henkilöitä");
            return;
        }
        String nimi = mNimi_f.getText();
        for (Henkilo h : henkilot ) {
            if(nimi.equals(h.getNimi())) {
                henkilot.remove(h);
                prompt.setText(nimi + " poistettu!");
                return;
            }
            else {
                prompt.setText("Ei nimeä " + nimi + " listassa.");
            }
        }
    }
}

