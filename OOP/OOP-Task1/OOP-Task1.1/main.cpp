#include <iostream>

using namespace std;


class Account{
private:
    int id;
    string name;
    double balance;
public:
    //Default Constructor
    Account(){
    id=0;
    name="";
    balance=0.0;
    }
    //Parametrized Constructor
    Account(int id, string name, double balance){
    this->id=id;
    this->name=name;
    this->balance=balance;
    }
    //Copy Constructor
    Account(Account &a){
    id=a.getId();
    name=a.getName();
    balance=a.getBalance();
    }
    //Setters & Getters
    void setId(int id){
    this->id=id;
    }
    void setName(string name){
    this->name=name;
    }
    void setBalance(double balance){
    this->balance=balance;
    }
    int getId(){
    return id;
    }
    string getName(){
    return name;
    }
    double getBalance(){
    return balance;
    }
    //Methods
    void setData(int id, string name, double balance){
    this->id=id;
    this->name=name;
    this->balance=balance;
    }
    void printInfo(){
    cout<<"Id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Balance: "<<balance<<endl;
    cout<<endl;
    }
    void TransferTo(Account &a, double transferredValue){
        if(transferredValue<balance){
            a.setBalance(a.balance+transferredValue);
    balance-=transferredValue;
    cout<<"An Amount of "<<transferredValue<<" from \""<<name<<"\" Has been successfully transferred to \""<<a.name<<"\"."<<endl<<endl;
        }
        else{
            cout<<"Couldn't transfer "<<transferredValue<<" from \""<<name<<"\" to \""<<a.name<<"\"."<<endl<<endl;
        }
        }
};
int main()
{
    Account a1(1,"account one",1000);
    a1.printInfo();
    Account a2 (2,"account two",3000);
    a2.printInfo();
    a2.TransferTo(a1,500);
    a1.printInfo();
    a2.printInfo();
    a1.TransferTo(a2,14500);
    a1.printInfo();
    a2.printInfo();


}
