#include <iostream>
using namespace std;
int main()
{
long long num1, num2, ans;
char sign, equal_sign;
cin>>num1>>sign>>num2>>equal_sign>>ans;
if(sign=='*'){
    if(num1*num2==ans){
        cout<<"Yes";
    }
    else{
        cout<<num1*num2;
    }
}
else if (sign=='+'){
     if(num1+num2==ans){
        cout<<"Yes";
    }
    else{
        cout<<num1+num2;
    }
}
else{
    //sign=='-'
     if(num1-num2==ans){
        cout<<"Yes";
    }
    else{
        cout<<num1-num2;
    }
}
}
