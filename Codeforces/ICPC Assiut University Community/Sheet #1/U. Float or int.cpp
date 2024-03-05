#include <iostream>
using namespace std;
int main()
{
float number, integer_part, double_part;
cin>>number;
integer_part=(int)number;
double_part=number-integer_part;
if(double_part==0){
    cout<<"int "<<integer_part<<endl;
}
else{
    cout<<"float "<<integer_part<<" "<<double_part<<endl;
}

}
