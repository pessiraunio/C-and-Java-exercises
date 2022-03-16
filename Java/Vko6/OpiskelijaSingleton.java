import java.util.ArrayList;

public class OpiskelijaSingleton {

    //Luokalle arraylist opiskelija olioista
    private ArrayList<Opiskelija> opiskelijat = new ArrayList<Opiskelija>();
    //instanssin alustus
    private static OpiskelijaSingleton op_instance;
    //instanssin luonti metodi
    public static OpiskelijaSingleton getInstance() {
        if (op_instance == null) {
            // Luodaan instanssi jos sitä ei ole olemassa
            op_instance = new OpiskelijaSingleton();
        }
        return op_instance;
    }

    //private rakentaja
    private OpiskelijaSingleton() {

    }
    public void lisaaOpiskelija(Opiskelija oppilas) {
        opiskelijat.add(oppilas);
        System.out.println("Opiskelija " + oppilas.getNimi() + " lisatty!");

    }
    public void haeOpiskelija(String aName) {
        for (Opiskelija o : opiskelijat) {
            String name = o.getNimi();
            System.out.println(name.equals(aName));
            if (name.equals(aName)) {
                System.out.println("Opiskelija " + name + " löytyi!\n");
                o.tulostaTiedot();
                break;
            }
        System.out.println("Ei opiskelijaa " + name + " listassa.");
        }
    }
    public void tulostaOpiskelijat() {
        for (Opiskelija o : opiskelijat) {
            o.tulostaTiedot();
        }
    }
}
