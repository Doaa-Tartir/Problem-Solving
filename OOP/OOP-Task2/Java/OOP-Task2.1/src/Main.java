public class Main {
    public static void main(String[] args) {
        Vehicle v=new Vehicle("Mercedes","1990A", 196, 73.5, 44.7 );
        v.display();

        System.out.println();

        Truck t=new Truck("Kenworth", "T909", 68, 80, 60.73, 1000);
        t.display();
        System.out.println(t.fuelNeeded(20));
        System.out.println(t.distanceCovered(3)+"\n");
        
        Bus b=new Bus("Marcopolo", "P94", 50, 60.25, 34.50, 60);
        b.display();
        System.out.println(b.fuelNeeded(56));
        System.out.println(b.distanceCovered(2));
    }
}