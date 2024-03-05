#include <iostream>
using namespace std;
int main()
{
 char input;
 cin>>input;
  int value = (int)input;
  if (value>=0 && value<=64){
    cout<<"IS DIGIT"<<endl;
  }
  else if (value >=65 && value<=96){
    cout<<"ALPHA\nIS CAPITAL"<<endl;
  }
  else{
    cout<<"ALPHA\nIS SMALL"<<endl;
  }
}
