public class Vehicle {
    String model, reg_number;
    int speed;
    double fuel_capacity, fuel_consumption;

    Vehicle(){
        model="";
        reg_number="";
        speed=0;
        fuel_capacity=0.0;
        fuel_consumption=0.0;
    }
    Vehicle(String model, String reg_number, int speed, double fuel_capacity, double fuel_consumption){
        this.model=model;
        this.reg_number=reg_number;
        this.speed=speed;
        this.fuel_capacity=fuel_capacity;
        this.fuel_consumption=fuel_consumption;
    }

    public void setModel(String model){
        this.model=model;
    }

    public void setRegNumber(String reg_number){
        this.reg_number=reg_number;
    }

    public void setSpeed(int speed){
        this.speed=speed;
    }

    public void setFuelCapacity(double fuel_capacity){
        this.fuel_capacity=fuel_capacity;
    }

    public void setFuelConsumption(double fuel_consumption){
        this.fuel_consumption=fuel_consumption;
    }

    public String getModel(){
        return model;
    }

    public String getRegNumber(){
        return reg_number;
    }

    public int getSpeed(){
        return speed;
    }

    public double getFuelCapacity(){
        return fuel_capacity;
    }

    public double getFuelConsumption(){
        return fuel_consumption;
    }

    public double fuelNeeded(int distance){
        System.out.print(" Fuel needed: ");
        return fuel_consumption*distance;
    }

    public double distanceCovered(int hours){
        System.out.print(" Distance covered: ");
        return speed*hours;
    }
    public void display(){
        System.out.println(" Model: "+model+"\n Register number: "+reg_number+"\n Speed: "+speed+"\n Fuel capacity: "+fuel_capacity+"\n Fuel consumption: "+fuel_consumption);
    }
}
