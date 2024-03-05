#include <iostream>
using namespace std;
int main()
{
long long num1, num2, num3, num4, value;
cin>>num1>>num2>>num3>>num4;
value=((num1%100)*(num2%100)*(num3%100)*(num4%100))%100;
if(value<10){
    cout<<"0"<<value;
}
else{
    cout<<value;
}
}
