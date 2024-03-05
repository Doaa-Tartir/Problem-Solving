#include <iostream>

using namespace std;
class Vehicle{
string model, reg_number;
int speed;
double fuel_capacity, fuel_consumption;

public:
Vehicle(){
model="";
reg_number="";
speed=0;
fuel_capacity=0.0;
fuel_consumption=0.0;
}

Vehicle(string model, string reg_number, int speed, double fuel_capacity, double fuel_consumption){
this->model=model;
this->reg_number=reg_number;
this->speed=speed;
this->fuel_capacity=fuel_capacity;
this->fuel_consumption=fuel_consumption;
}

void setModel(string model){
this->model=model;
}

void setRegNumber(string reg_number){
this->reg_number=reg_number;
}

void setSpeed(int speed){
this->speed=speed;
}

void setFuelCapacity(double fuel_capacity){
this->fuel_capacity=fuel_capacity;
}

void setFuelConsumption(double fuel_consumption){
this->fuel_consumption=fuel_consumption;
}

string getModel(){
return model;
}

string getRegNumber(){
return reg_number;
}

int getSpeed(){
return speed;
}

double getFuelCapacity(){
return fuel_capacity;
}

double getFuelConsumption(){
return fuel_consumption;
}

double fuelNeeded(int distance){
cout<<" Fuel needed: ";
return fuel_consumption*distance;
}

double distanceCovered(int hours){
cout<<" Distance covered: ";
return speed*hours;
}

void display(){
cout<<" Model: "<<model<<"\n Registered number: "<<reg_number<<"\n Speed: "<<speed<<"\n Fuel capacity: "<<fuel_capacity<<"\n Fuel consumption: "<<fuel_consumption<<endl;
}
};

class Truck:public Vehicle{
int cargo_weight_limit;

public:
Truck(){
cargo_weight_limit=0;
}

Truck(int cargo_weight_limit){
this->cargo_weight_limit=cargo_weight_limit;
}

Truck(string model, string reg_number, int speed, double fuel_capacity, double fuel_consumption, int cargo_weight_limit):Vehicle(model, reg_number, speed, fuel_capacity, fuel_consumption){
this->cargo_weight_limit=cargo_weight_limit;
}

void setCargoWeightLimit(int cargo_weight_limit){
this->cargo_weight_limit=cargo_weight_limit;
}

int getCargoWeightLimit(){
return cargo_weight_limit;
}

void display(){
cout<<"\n Truck Information:\n";
Vehicle::display();
cout<<" Cargo weight limit: "<<cargo_weight_limit<<endl;
}
};

class Bus:public Vehicle{
int number_of_passengers;

public:
Bus(){
number_of_passengers=0;
}

Bus(int number_of_passengers){
this->number_of_passengers=number_of_passengers;
}

Bus(string model, string reg_number, int speed, double fuel_capacity, double fuel_consumption, int number_of_passengers):Vehicle(model, reg_number, speed, fuel_capacity, fuel_consumption){
this->number_of_passengers=number_of_passengers;
}

void setNumberOfPassengers(int number_of_passengers){
this->number_of_passengers=number_of_passengers;
}

int getNumberOfPassengers(int number_of_passengers){
return number_of_passengers;
}
void display(){
cout<<"\n Bus Information:\n";
Vehicle::display();
cout<<" Number of passengers "<<number_of_passengers<<endl;
}
};
int main()
{
    Vehicle v("Mercedes","1990A", 196, 73.5, 44.7 );
    v.display();

    Truck t("Kenworth", "T909", 68, 80, 60.73, 1000);
    t.display();
    cout<<t.fuelNeeded(20)<<endl;
    cout<<t.distanceCovered(3)<<endl;

    Bus b("Marcopolo", "P94", 50, 60.25, 34.50, 60);
    b.display();
    cout<<b.fuelNeeded(56)<<endl;
    cout<<b.distanceCovered(2);

}
