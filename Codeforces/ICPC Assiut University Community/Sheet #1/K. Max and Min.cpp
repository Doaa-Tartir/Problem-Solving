#include <iostream>
using namespace std;
int main()
{
  long long num1=0, num2=0, num3=0, maximum=0, minimum=0;
    cin>>num1>>num2>>num3;
  minimum=num1;
  if(minimum>num2 && minimum>num3){
    maximum=num1;
    if(num2>=num3){
        minimum=num3;
    }
    else if(num3>=num2){
        minimum=num2;
    }

  }
  else if(minimum>=num2 && minimum<=num3){
    minimum=num2;
    maximum=num3;
  }
  else if(minimum<=num2 && minimum>=num3){
    minimum=num3;
    maximum=num2;
  }
  else{
    //minimum<num2 && minimum<num3
    if(num3>num2){
        maximum=num3;
    }
    else if(num2>num3){
        maximum=num2;
    }
    else{
        //num2==num3
        maximum=num2;
    }
  }

  cout<<minimum<<" "<<maximum<<endl;



}
