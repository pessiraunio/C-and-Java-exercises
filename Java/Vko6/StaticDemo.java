public class StaticDemo {

    public static void main(String args[]) {
        
        //Käytetään NumberSingleton luokan getInstance- metodia instanssin luomiseen
        //Instanssin metodilla updateNumber päivitetään luku 4.
        NumberSingleton.getInstance().updateNumber(4);
        //Tulostetaan luku instanssin kautta metodilla getNumber()
        System.out.println(NumberSingleton.getInstance().getNumber());

        //TAI luodaan instanssi muuttuja numberSingleton
        NumberSingleton numberSingleton = NumberSingleton.getInstance();
        // Ja silloin..
        // Instanssimuuttujan kautta päivietään numero sekä tulostetaan luku
        numberSingleton.updateNumber(4);
        System.out.println(numberSingleton.getNumber());

    }

}