public class MyApp {

    //Kaikki luodaan javalla new:llä, ei deleteä.

    /*settings.json pitää lisätä vain se kansio mistä haluaa koodia ajaa että build toimii!*/
    
    public static void main(String args[]) {

        //Luodaan opiskelija olio kalle
        Opiskelija kalle = new Opiskelija("Kalle", "21314", 120);
        kalle.tulostaTiedot();
        // Tulostetaan oppilaiden lukumäärä kallen luonnin jälkeen
        kalle.oppilaidenMaara();

        Opiskelija mauri = new Opiskelija("Mauri", "33333", 190);
        mauri.tulostaTiedot();
        Opiskelija tero = new Opiskelija("Tero", "11111", 10);
        tero.tulostaTiedot();
        // Tulostetaan lopuksi luotujen oppilaiden määrä.
        tero.oppilaidenMaara();
        kalle.oppilaidenMaara();


        /*
        //Luodaan kuuntelija kuuntelijaluokan toteutuksesta
        listenerClass listener = new listenerClass();
        kalle.setKuuntelija(listener);

        kalle.setOpiskelijanumero("32311");

        kalle.setOpintopisteet(123);

        
        //Luodaan harjoittelija olio maija, joka perii luokan Opiskelija ominaisuudet
        Harjoittelija maija = new Harjoittelija("Maija", "23232", 180, "Vincit", 2000);
        //Tulostetaan Maijan tiedot.
        maija.tulostaTiedot();

        Opiskelija jake = new Harjoittelija("Jake", "13442", 120, "CGI", 1000);
        //Tulostetaan Maijan tiedot.
        jake.tulostaTiedot();
        
        */
    }
    //Javassa cpp:n const on final, mutta niitä ei käytetä yleensä rajapinnaassa (eli funktion parametreissä)
}

//Luodaan kuuntelijaluokka
class listenerClass implements Kuuntelija {

    //Luokan rakentaja
    public listenerClass() {
    }
    //Kuuntelijaluokan metodin overraidaus
    @Override
    public void tiedotMuuttuneet(String data) {
        System.out.println("Oppilaan tiedot ovat muuttuneet, uusi data: " + data);
    }
    @Override
    public void opMuuttuneet(int data) {
        System.out.println("Oppilaan opintopisteet ovat muuttuneet, uudet pisteet: " + data);
    }
}

// Kuuntelija interface
interface Kuuntelija {
    void tiedotMuuttuneet(String data);
    void opMuuttuneet(int data);
}