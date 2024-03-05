#include <iostream>
using namespace std;
int main()
{
 long long num,digit;
 cin>>num;
 while(num!=0){
    digit=num%10;
    num/=10;
 }
 if(digit%2==0)
 cout<<"EVEN"<<endl;
 else{
 cout<<"ODD"<<endl;
 }
}
