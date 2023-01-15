#include<iostream>
using namespace std;
int discount(int amount, string day, string month);
main()
{
    int amount;
    string day;
    string month;
    cout<<"enter month";
    cin>>month;
    cout<<"enter amount";
    cin>>amount;
    cout<<"enter day :";
    cin>>day;
    int total = discount(amount, day, month );
    cout<<total;

}
  int discount(int amount, string day, string month)
  {
    int paid = amount;
    if(day=="sunday" && month=="october")
    {
        paid = amount-(amount*10)/100;
    }
    else if(day=="sunday" && month!="october")
    {
        paid = amount-(amount*5)/100;
    }
    else 
    {
        return 0;
    }



  }