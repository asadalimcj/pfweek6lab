#include<iostream>
using namespace std;
string checkspeed(float speed);
main()
{
    float speed;
    string info;
    cout<<"enter speed :";
    cin>>speed;
    info = checkspeed(speed);
    cout<<info;

}
  string checkspeed(float speed)
  {
    string info;
    if(speed<10)
    {
        info = "slow";
    }
    else if(speed>10 && speed<50)
    {
        info = "average";
    }
    else if(speed>50 && speed<150)
    {
        info = "fast";
    }
    if(speed>150 && speed<1000)
    {
        info = "ultra fast";
    }
    if(speed>1000)
    {
        info = "extremely fast";
    }
    return info;
  }
