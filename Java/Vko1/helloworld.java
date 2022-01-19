//Java on puhdas oliokieli, kaikkikoodi onluokkien sisällä
//Luokka on Java-ohjelman perusmoduuli

public class helloworld {
    public static void main(String args[]) {
        //Java -ohjelman suoritus alkaa tästä
        
        //Luodaan opiskelija ja tulostetaan tiedot
        Opiskelija kalle = new Opiskelija("Kalle", "12345");
        kalle.setOpintopisteet(40);
        kalle.setNimi("Mauri");
        kalle.setOpiskelijanumero("55221");
        kalle.tulostaTiedot();
        System.out.println(kalle.getNimi());
        //Ei deleteä, roskienkeruu hoitaa vapautuksen kun hoitaa

    }
}