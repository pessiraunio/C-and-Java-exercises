
public class Car {

    private String mMake;
    private String mModel;
    private double mEngineDisplacement;
    private int mManufactureYear;

    public Car() {
        
    }

    public Car(String aMake, String aModel, double aEngineDisplacement, int aManufactureYear) {
        mMake = aMake;
        mModel = aModel;
        mEngineDisplacement = aEngineDisplacement;
        mManufactureYear = aManufactureYear;
    }

    //Defining set- methods

    public void setMake(String aMake) {
        mMake = aMake;
    }
    public void setModel(String aModel) {
        mModel = aModel;
    }
    public void setEngineDisplacement(double aEngineDisplacement) {
        mEngineDisplacement = aEngineDisplacement;
    }
    public void setManufactureYear(int aManufactureYear) {
        mManufactureYear = aManufactureYear;
    }

    //Defining get- methods

    public String getMake() {
        return mMake;
    }
    public String getModel() {
        return mModel;
    }
    public double getEngineDisplacement() {
        return mEngineDisplacement;
    }
    public int getManufactureYear() {
        return mManufactureYear;
    }

    public void getCarInfo() {
        System.out.println("Merkki: " + getMake());
        System.out.println("Malli: " + getModel());
        System.out.println("Moottorin tilavuus: " + getEngineDisplacement());
        System.out.println("Valmistusvuosi: " + getManufactureYear());
        System.out.println("-------------------");
    }

}
