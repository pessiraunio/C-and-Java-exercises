public class StaticDemo {

    public static void main(String args[]) {
        
        NumberSingleton.getInstance().updateNumber(4);
        System.out.println(NumberSingleton.getInstance().getNumber());

        //TAI
        NumberSingleton numberSingleton = NumberSingleton.getInstance()
        // Ja silloin..
        numberSingleton.updateNumber(4);
        System.out.println(numberSingleton.getNumber());

    }

}