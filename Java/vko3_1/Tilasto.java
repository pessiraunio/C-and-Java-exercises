public class Tilasto {

    public static double summa(double aLuvut[]) {
        double tulos = 0.0;
        for (int i=0; i<aLuvut.length; i++) {
            tulos = aLuvut[i] + tulos;
        }
        return tulos;
     }

     public static double minimi(double aLuvut[]) {
        double tulos = aLuvut[0];
        for (int i=0; i<aLuvut.length; i++) {
            if(aLuvut[i] < tulos) {
                tulos = aLuvut[i];
            }
        }
        return tulos;
     }
     
     public static double maksimi(double aLuvut[]) {
        double tulos = aLuvut[0];
        for (int i=0; i<aLuvut.length; i++) {
            if(aLuvut[i] > tulos) {
                tulos = aLuvut[i];
            }
        }
        return tulos;
     }

     public static double keskiarvo(double aLuvut[]) {
        double tulos = 0;
        for (int i=0; i<aLuvut.length; i++) {
            tulos = aLuvut[i] + tulos;
        }
        tulos = tulos / aLuvut.length;
        return tulos;
     }



}
