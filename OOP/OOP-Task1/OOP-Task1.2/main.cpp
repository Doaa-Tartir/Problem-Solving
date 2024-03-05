#include <iostream>

using namespace std;
double maximum=0.0;
int number=0;
class Student{
private:
    int id;
    string name;
    int marks[5];
public:
    //Default Constructor
    Student(){
    id=0;
    name="";
    for(int i=0; i<5;i++){
        marks[i]=0;
    }
    }
    //Parametrized Constructor
    Student(int i, string n){
    id=i;
    name=n;
    }
    //Setters & Getters
    void setId(int id){
    this->id=id;
    }
    void setName(string name){
    this->name=name;
    }
    int getId(){
    return id;
    }
    string getName(){
    return name;
    }

    void read_marks(int m[],int length){
        for (int i = 0; i < length; i++) {
            marks[i] = m[i];

    }
    }

    void printInfo(){
    cout<<"Id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    double avg=0.0;
    cout<<"Average: "<<calc_avg(avg)<<endl;
    }

    double calc_avg(double &avg){
    for(int i=0; i<sizeof(marks)/sizeof(marks[0]);i++){
        avg+=marks[i];
    }
    return avg/(sizeof(marks)/sizeof(marks[0]));
    }

};
void get_max(Student students[]);

int main()
{
    Student students[3];

    int id=0;
    string name="";
    int m[5];
    for(int i=0; i<3;i++){
        cout<<"Enter info for student #"<<i+1<<":"<<endl;
        cout<<"id: ";
        cin>>id;
        students[i].setId(id);
        cout<<"name: ";
        cin>>name;
        students[i].setName(name);
        cout<<"Enter marks for student"<<endl;
        for(int i=0; i<5; i++){
            cout<<"Mark #"<<i+1<<":";
            cin>>m[i];
        }
        int length=sizeof(m)/sizeof(m[0]);
        students[i].read_marks(m,length);
     /*Because c++ doesn't allow to pass the entire array to a function but a pointer to it we can find the length as above.
    sizeof(m) the size of the whole array in bytes 5 elements * 4 bytes (for integers) = 20
    To find the number of elements in the array we can divide the size of entire array by size of data type for elements there (integers).
    number of elements (or length) = 20 bytes / 4 bytes = 5 elements.
    */

    }
    //Print the max GPA
   get_max(students);
}
void get_max(Student students[]){
    double avg=0.0;
    double currentAvg=0.0;
    maximum=students[0].calc_avg(avg); //99
    for(int i=0; i<3;i++){
            avg=0.0;
    currentAvg=students[i].calc_avg(avg); //99
    if(currentAvg>maximum && currentAvg!=maximum){
        cout<<"maximum one"<<maximum<<endl;

        cout<<"current average"<<currentAvg<<endl;
        maximum=currentAvg;
        number=i;
    }
    }
    cout<<endl;
    cout<<"Information for the student that has a maximum gpa: "<<endl;
    students[number].printInfo();
    }

