public class Truck extends Vehicle{
 int cargo_weight_limit;

 Truck(){
     cargo_weight_limit=0;
 }
 Truck(String model, String reg_number, int speed, double fuel_capacity, double fuel_consumption, int cargo_weight_limit){
     super(model, reg_number, speed, fuel_capacity, fuel_consumption);
     this.cargo_weight_limit=cargo_weight_limit;
 }

    public void setCargo_weight_limit(int cargo_weight_limit) {
        this.cargo_weight_limit = cargo_weight_limit;
    }

    public int getCargo_weight_limit(){
     return cargo_weight_limit;
    }

    @Override
    public void display(){
     System.out.println("Truck Information: ");
     super.display();
     System.out.print(" Cargo weight limit: "+cargo_weight_limit+"\n");
    }
}
