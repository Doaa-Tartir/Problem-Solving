#include <iostream>
using namespace std;
int main()
{
 long long num1, num2;
 char operation;
 cin>>num1>>operation>>num2;
 int value = (int)operation;
 if (value==42){
    cout<<num1*num2<<endl;
  }
  else if(value==43){
    cout<<num1+num2<<endl;
  }
  else if(value==45){
    cout<<num1-num2<<endl;
  }
  else{
    cout<<num1/num2<<endl;
  }
}
