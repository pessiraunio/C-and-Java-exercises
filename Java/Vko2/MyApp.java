public class MyApp {

    //Kaikki luodaan javalla new:llä, ei deleteä.

    /*settings.json pitää lisätä vain se kansio mistä haluaa koodia ajaa että build toimii!*/
    
    public static void main(String args[]) {
        //Luodaan opiskelija olio kalle
        Opiskelija kalle = new Opiskelija("Kalle", "21314", 120);
        //Tulostetaan kallen tiedot
        kalle.tulostaTiedot();

        //Luodaan harjoittelija olio maija, joka perii luokan Opiskelija ominaisuudet
        Harjoittelija maija = new Harjoittelija("Maija", "23232", 180, "Vincit", 2000);
        //Tulostetaan Maijan tiedot.
        maija.tulostaTiedot();

        Opiskelija jake = new Harjoittelija("Jake", "13442", 120, "CGI", 1000);
        //Tulostetaan Maijan tiedot.
        jake.tulostaTiedot();
    
    }

    //Javassa cpp:n const on final, mutta niitä ei käytetä yleensä rajapinnaassa (eli funktion parametreissä)
}