import java.util.Scanner;

import javax.xml.validation.Schema;

public class StaticDemo {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        int input;
        String name;
        String id;
        int credit;

        while(true) {
            System.out.println("Tervetuloa - paina 4 sulkeaksesi ohjelman");
            System.out.println("1-Lisaa opiskelija\n2-Hae nimella\n3-tulosta opiskelijat.");
            input = sc.nextInt();
            sc.nextLine();
            if (input==1) {
                System.out.print("Nimi: ");
                name = sc.nextLine();
                System.out.print("Opiskelijanumero: ");
                id = sc.nextLine();
                System.out.print("Opintopisteet: ");
                credit = sc.nextInt();
                Opiskelija oppilas = new Opiskelija(name, id, credit);
                OpiskelijaSingleton.getInstance().lisaaOpiskelija(oppilas);
            }
            else if(input==2) {
                System.out.print("Haettavan nimi: ");
                name = sc.nextLine();
                OpiskelijaSingleton.getInstance().haeOpiskelija(name);
                
            }
            else if(input==3) {
                OpiskelijaSingleton.getInstance().tulostaOpiskelijat();
            }
        }
    }
    //Käytetään NumberSingleton luokan getInstance- metodia instanssin luomiseen
        //Instanssin metodilla updateNumber päivitetään luku 4.
        //NumberSingleton.getInstance().updateNumber(4);
        //Tulostetaan luku instanssin kautta metodilla getNumber()
        //System.out.println(NumberSingleton.getInstance().getNumber());

        //TAI luodaan instanssi muuttuja numberSingleton
        //NumberSingleton numberSingleton = NumberSingleton.getInstance();
        // Ja silloin..
        // Instanssimuuttujan kautta päivietään numero sekä tulostetaan luku
        //numberSingleton.updateNumber(4);
        //System.out.println(numberSingleton.getNumber());

}