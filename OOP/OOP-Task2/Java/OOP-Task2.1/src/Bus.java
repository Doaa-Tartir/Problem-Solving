public class Bus extends Vehicle{
    int number_of_passengers;

    Bus(){
        number_of_passengers=0;
    }

    Bus(int number_of_passengers){
       this.number_of_passengers=number_of_passengers;
    }

    Bus(String model, String reg_number, int speed, double fuel_capacity, double fuel_consumption, int number_of_passengers){
        super(model, reg_number, speed, fuel_capacity, fuel_consumption);
        this.number_of_passengers=number_of_passengers;
    }

    void setNumber_of_passengers(int number_of_passengers){
        this.number_of_passengers=number_of_passengers;
    }

    int getNumber_of_passengers(){
        return number_of_passengers;
    }

    @Override
    public void display(){
        System.out.println("Bus Information: ");
        super.display();
        System.out.print(" Number of passengers: "+number_of_passengers+"\n");
    }
}
