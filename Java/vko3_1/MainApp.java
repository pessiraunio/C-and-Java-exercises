
public class MainApp {
    
    public static void main(String args[]) {

        double[] luvut = {1.4 ,4.5 ,2.5 ,3.1 ,1.7};

        System.out.println(Tilasto.summa(luvut));
        System.out.println(Tilasto.minimi(luvut));
        System.out.println(Tilasto.maksimi(luvut));
        System.out.println(Tilasto.keskiarvo(luvut));
    }
}
