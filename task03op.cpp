#include<iostream>
using namespace std;
bool greatern(int num1, int num2, int num3);
main()
{
    int num1, num2, num3;
    cout<<"enter three number";
    cin>>num1>>num2>>num3;
    bool great = greatern(num1, num2, num3);
    if(great==true)
    {
        cout<<"yes"<<endl;
    }
    else if (great==false)
    {
        cout<<"no"<<endl;
    }
}
  bool greatern(int num1, int num2, int num3)
  {
     if(num1==num2 && num1==num3)
     {
        return true;
     }
     return false;
  }