import java.util.Scanner;

public class Henkilotiedot {

     public static void main(String args[]) {

        //Tehdään ohjelma, joka käsittelee henkilötietoja
        Scanner sc = new Scanner(System.in);
        int input;

        do {
            System.out.println("1 - Lisää uusi henkilö\n2 - Poista henkilö\n3 - Tulosta henkilöt.\n4 - Lopeta.");
            if (!sc.hasNextInt()) {
                System.out.println("Syötä vain kokonaislukuja.");
                return;
            }
            input = sc.nextInt();
            
            if (input == 1) {
                Tietojenhallinta.lisaaHenkilo();
            }
            else if (input==2) {
                Tietojenhallinta.poistaHenkilo();
            }
            else if (input==3) {
                Tietojenhallinta.tulostaHenkilot();
            }
            else if (input==4) {
                break;
            }

        }while(input != 4);

        sc.close();
    }
}
