import java.util.ArrayList;
import java.util.Scanner;
import java.util.Locale;

public class Manager {
    
    //Array list Car- olioita
    private ArrayList<Car> CarCatalog = new ArrayList<Car>();

    private static Manager instance;

    public static Manager getInstance() {
        if (instance ==  null) {
            instance = new Manager();
        }
        return instance;
    }

    private Manager() {
        //Constructor
    }

    public void addCar(Car vehicle) { //  Lisätään parametrina saatu olio listaan.
        CarCatalog.add(vehicle);
        System.out.println("-------------------");
        System.out.println("Auto " + vehicle.getMake() + " lisatty!\n");
    }


    public void getCarByMake(String aMake) {
        for (Car car : CarCatalog) { // Selataan läpi jokainen merkki listassa, palautetaan ensimmäinen.
            String make = car.getMake();
            System.out.println(make.equals(aMake));
            if(make.equals(aMake)) {
                System.out.println("Car " + aMake + " löytyi!\n");
                car.getCarInfo();
                break;
            }
        System.out.println("Ei merkkia " + aMake + " listassa.");
        }
    }
    public void removeCarByMake(String aMake) {
        for (Car car : CarCatalog) {
            if(aMake.equals(car.getMake())) {
                CarCatalog.remove(car);
                System.out.println("Car " + aMake + " poistettu!\n");
                break;
            }
        }
        System.out.println("Ei merkkia " + aMake + " listassa.");
    }

    public void updateCarInfo(Car carObject) {

        int userInput = 0;
        String make;
        String model;
        double enginedispl;
        int manufacyear;

        Scanner scan = new Scanner(System.in);
        scan.useLocale(Locale.US);
        System.out.print("-Valitse paivitettava tieto-\n");

        while(true) { // Muokataan olion tietoja olion omilla metodeilla.
            System.out.println("1 - Merkki\n2 - Malli\n3 - Moottorin tilavuus\n4 - Valmistusvuosi");
            userInput = scan.nextInt();
            scan.nextLine();
            if (userInput == 1) {
                System.out.print("Uusi merkki: ");
                make = scan.nextLine();
                carObject.setMake(make);
                System.out.println("Tiedot paivitetty!");
                carObject.getCarInfo();
                break;
            }
            else if (userInput == 2) {
                System.out.print("Uusi malli: ");
                model = scan.nextLine();
                carObject.setModel(model);
                System.out.println("Tiedot paivitetty!");
                carObject.getCarInfo();
                break;
            }
            else if (userInput == 3) {
                System.out.print("Uusi moottorin tilavuus: ");
                if(!scan.hasNextDouble()) {
                    System.out.println("Kayta vain numeroita.");
                    break;
                }
                enginedispl = scan.nextDouble();
                scan.nextLine();
                carObject.setEngineDisplacement(enginedispl);
                System.out.println("Tiedot paivitetty!");
                carObject.getCarInfo();
                break;
            }
            else if (userInput == 4) {
                System.out.print("Uusi valmistusvuosi: ");
                if(!scan.hasNextInt()) {
                    System.out.println("Kayta vain numeroita.");
                    break;
                }
                manufacyear = scan.nextInt();
                scan.nextLine();
                carObject.setManufactureYear(manufacyear);
                System.out.println("Tiedot paivitetty!");
                carObject.getCarInfo();
                break;
            }
            else {
                System.out.println("Invalid input");
                continue;
            }
        }
    }

    public Car findCarByMake(String aMake) {
        if (CarCatalog.size() == 0) { // Tarkistetaan onko lista tyhjä
            System.out.println("Ei autoja listassa");
            return null;
        }
        for (Car car : CarCatalog) { // Palautetaan ensimmäinen löydös
            if (aMake.equals(car.getMake())) {
                return car;
            }
        }
        System.out.println("Ei merkkia " + aMake + " listassa.");
        return null;
    }


    public void getAllCars() {
        if (CarCatalog.size() == 0) {
            System.out.println("Ei autoja listassa");
            return;
        }
        for (Car car : CarCatalog) {
            car.getCarInfo();
        }
    }
}
