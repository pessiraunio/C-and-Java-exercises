import java.util.ArrayList;
import java.util.Scanner;

public class Tietojenhallinta {

    private static String mNimi;
    private static int mIka;
    private static String mKatu;
    private static String mPostinumero;
    private static String mKunta;
    private static ArrayList<Henkilo> henkilot = new ArrayList<Henkilo>();
    private static Scanner sc = new Scanner(System.in);

    public Tietojenhallinta(String aNimi, int aIka, String aKatu, String aPostinumero, String aKunta) {
        mNimi = aKatu;
        mIka = aIka;
        mKatu = aKatu;
        mPostinumero = aPostinumero;
        mKunta = aKunta;
    }
    
    
    public static void lisaaHenkilo() {
        int counter = 0;
        do {
            System.out.println("Anna lisättävän henkilön nimi: ");
            mNimi = sc.nextLine();
            System.out.println("Anna lisättävän henkilön ika: ");
            if (!sc.hasNextInt()) {
                System.out.println("Anna ikä kokonaislukuna.");
                return;
            }
            mIka = sc.nextInt();
            sc.nextLine();
            System.out.println("Anna lisättävän henkilön katuosoite: ");
            mKatu = sc.nextLine();
            System.out.println("Anna lisättävän henkilön postinumero: ");
            mPostinumero = sc.nextLine();
            System.out.println("Anna lisättävän henkilön asuin kunta: ");
            mKunta = sc.nextLine();
            counter++;

            System.out.println("Henkilö " + mNimi + " lisätty!");

        }while(counter==0);

        henkilot.add(new Henkilo(mNimi, mIka,(new Osoite(mKatu,mPostinumero,mKunta))));
    }

    public static void tulostaHenkilot() {
        if (henkilot.size() == 0) {
            System.out.println("Listassa ei ole vielä henkilöitä");
            return;
        }
        for (Henkilo h : henkilot ) {
            System.out.println("- - - - - -");
            h.tulostaTiedot();
        }
    }

    public static void poistaHenkilo() {
        if (henkilot.size() == 0) {
            System.out.println("Listassa ei ole vielä henkilöitä");
            return;
        }
        System.out.println("Anna poistettavan henkilön nimi: ");
        String nimi = sc.nextLine();
        for (Henkilo h : henkilot ) {
            if(nimi.equals(h.getNimi())) {
                henkilot.remove(h);
                System.out.println(nimi + " poistettu!");
                return;
            }
            else {
                System.out.println("Ei nimeä " + nimi + " listassa.");
            }
        }
    }
}

