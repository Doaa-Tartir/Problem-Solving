#include <iostream>
using namespace std;
int main()
{
 char input;
 cin>>input;
 int value = (int)input;
 if (value >=65 && value<=96){
    cout<<(char) (value+32)<<endl;
  }
  else{
    cout<<(char) (value-32)<<endl;
  }
}
