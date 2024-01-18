#include <iostream>
using namespace std;
int main() {
  int EnterYear;
  cout<<"Enter a year AD, "<<endl;
  cin>>EnterYear;
  if(EnterYear%400==0)
  {
    cout<<EnterYear<<" is a leap year"<<endl;
  }
  else if(EnterYear%100==0)
  {
    cout<<EnterYear<<" is not a leap year"<<endl;
  }
  else if(EnterYear%4==0)
  {
    cout<<EnterYear<<" is a leap year"<<endl;
  }
  else  
  {
    cout<<EnterYear<<" is not a leap year"<<endl;
  }
  return 0;
}