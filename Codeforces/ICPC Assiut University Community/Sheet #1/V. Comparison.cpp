#include <iostream>
using namespace std;
int main()
{
long long num1, num2;
char operation;
cin>>num1>>operation>>num2;
if(operation=='>'){
    if (num1>num2){
        cout<<"Right";
    }
    else{
        cout<<"Wrong";
    }
}
else if(operation=='<'){
     if (num1<num2){
        cout<<"Right";
    }
    else{
        cout<<"Wrong";
    }
}
else{
    //(operation=='=')
     if (num1==num2){
        cout<<"Right";
    }
    else{
        cout<<"Wrong";
    }
}
}
