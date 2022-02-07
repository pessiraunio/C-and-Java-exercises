import java.util.ArrayList;

public class Henkilotiedot {
    public static void main(String args[]) {
        //Tehdään ohjelma, joka käsittelee henkilötietoja

        //Dynaaminen taulukko c++:n vektoria vastaava dynaaminen tietorakenne
        ArrayList<Henkilo> henkilot = new ArrayList<Henkilo>();
        henkilot.add(new Henkilo("Kalle", 20,(new Osoite("Siperiantie 137","33110","Ruutana"))));
        henkilot.add(new Henkilo("Maija", 22));

        for (Henkilo h : henkilot ) {
            h.tulostaTiedot();
        }

    }
}
