#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
  const float PI=3.141592653f;
  float R;
  cin>>R;
  double area=PI*(R*R);
  cout << fixed << setprecision(9);
  cout<<area;

}
