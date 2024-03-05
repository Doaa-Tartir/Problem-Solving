#include <iostream>
using namespace std;
int main()
{
long long num1, num2, num3;
cin>>num1>>num2>>num3;
if(num1>num2 && num1>num3){
    if (num2>num3){
        cout<<num3<<"\n"<<num2<<"\n"<<num1<<"\n\n";
        cout<<num1<<"\n"<<num2<<"\n"<<num3<<endl;
    }
    else if (num3>num2){
        cout<<num2<<"\n"<<num3<<"\n"<<num1<<"\n\n";
        cout<<num1<<"\n"<<num2<<"\n"<<num3<<endl;
    }
    else{
        //num2==num3
        cout<<num2<<"\n"<<num3<<"\n"<<num1<<"\n\n";
        cout<<num1<<"\n"<<num2<<"\n"<<num3<<endl;
    }

}
else if (num1<num2 && num1<num3){
     if (num2>num3){
        cout<<num1<<"\n"<<num3<<"\n"<<num2<<"\n\n";
        cout<<num1<<"\n"<<num2<<"\n"<<num3<<endl;
    }
    else if (num3>num2){
        cout<<num1<<"\n"<<num2<<"\n"<<num3<<"\n\n";
        cout<<num1<<"\n"<<num2<<"\n"<<num3<<endl;
    }
    else{
      //num2==num3
       cout<<num1<<"\n"<<num2<<"\n"<<num3<<"\n\n";
       cout<<num1<<"\n"<<num2<<"\n"<<num3<<endl;
    }
}
else if (num1>=num2 && num1<=num3){
       cout<<num2<<"\n"<<num1<<"\n"<<num3<<"\n\n";
       cout<<num1<<"\n"<<num2<<"\n"<<num3<<endl;

}
else{
   //(num1<=num2 && num1>=num3)
     cout<<num3<<"\n"<<num1<<"\n"<<num2<<"\n\n";
    cout<<num1<<"\n"<<num2<<"\n"<<num3<<endl;
}
}
