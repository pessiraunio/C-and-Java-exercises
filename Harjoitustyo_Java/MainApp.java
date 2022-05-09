import java.util.Locale;
import java.util.Scanner;

public class MainApp {

    public static void main(String args[]) {

        //Luodaan instanssi datan käsittelyä varten
        Manager instance = Manager.getInstance();

        int userInput;
        String make;
        String model;
        double enginedisplacement;
        int manufactureyear;

        Scanner scan = new Scanner(System.in);
        scan.useLocale(Locale.US);

        while(true) {
            System.out.println("1 - Kaikki autot\n2 - Lisaa auto\n3 - Poista auto\n4 - Hae merkilla\n5 - Muokkaa tietoja");
            
            if(!scan.hasNextInt()) { //Tarkistetaan käyttäjän syöte
                System.out.println("Kayta vain numeroita.");
                break;
            }

            userInput = scan.nextInt();
            scan.nextLine();
            
            if (userInput == 1) {
                instance.getAllCars();
            }
            else if (userInput == 2) {
                System.out.print("Merkki: ");
                make = scan.nextLine();
                System.out.print("Malli: ");
                model = scan.nextLine();
                System.out.print("Moottorin tilavuus: ");
                if(!scan.hasNextDouble()) {  
                    System.out.println("Kayta vain numeroita.");
                    break;
                }
                enginedisplacement = scan.nextDouble();
                scan.nextLine();
                System.out.print("Valmistusvuosi: ");
                if(!scan.hasNextInt()) {
                    System.out.println("Kayta vain numeroita.");
                    break;
                }
                manufactureyear = scan.nextInt();
                scan.nextLine();

                Car newCar = new Car(make, model, enginedisplacement, manufactureyear);
                instance.addCar(newCar);
            }
            else if (userInput == 3) {
                System.out.print("Merkki: ");
                make = scan.nextLine();
                instance.removeCarByMake(make);
                
            }
            else if (userInput == 4) {
                System.out.print("Merkki: ");
                make = scan.nextLine();
                Car object = instance.findCarByMake(make);
                if(object == null) {
                    continue;
                }
                else {
                    object.getCarInfo();
                }
                
            }
            else if (userInput == 5) {
                System.out.print("Merkki: ");
                make = scan.nextLine();
                Car carObject = instance.findCarByMake(make);
                if (carObject == null) {
                    continue;
                }
                else {
                    instance.updateCarInfo(carObject);
                }
                
            }

        }
    }
}
