#include <iostream>
#include <cmath>
using namespace std;
int main()
{
long long num1, pow1, num2, pow2;
cin>>num1>>pow1>>num2>>pow2;
cout<<(pow1*log(num1)>pow2*log(num2)?"YES":"NO");
}
