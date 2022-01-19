public class MyApp {

    //Kaikki luodaan javalla new:llä, ei deleteä.
    public static void main(String args[]) {
        System.out.println("Hello World");
        Opiskelija kalle = new Opiskelija("Kalle", "21314");
        kalle.setOpintopisteet(23);

        Harjoittelija maija = new Harjoittelija("Maija", "23232", "Vincit", 2000);
        maija.tulostaTiedot();
    }

    //Javassa cpp:n const on final, mutta niitä ei käytetä yleensä rajapinnaassa (eli funktion parametreissä)
}