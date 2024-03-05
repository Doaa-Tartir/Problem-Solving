#include <iostream>
using namespace std;
int main()
{
long long age, years, months, days;
cin>>age;
years=age/365;
months=(age%365)/30;
days=(age%365)%30;
cout<<years<<" years\n"<<months<<" months\n"<<days<<" days\n";
}
