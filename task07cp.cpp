#include<iostream>
using namespace std;
float check_price(string city, string product,int quantity);
main()
{
   int quantity;
   string city, product;
   cout<<"enter quantity of product";
   cin>>quantity;
   cout<<"enter city name :";
   cin>>city;
   cout<<"enter name of product :";
   cin>>product;
   float cost = check_price(city, product, quantity);
   cout<<"the total cost is :"<<cost<<endl;
}
  float check_price(string city, string product,int quantity)
  {
    float cost;
    if(city=="sofia" && product=="coffee")
    {
        cost = quantity*0.50;
    }
    else if(city=="plovdiv" && product=="coffee")
    {
        cost = quantity*0.40;
    }
    else if(city=="varna" && product=="coffee")
    {
        cost = quantity*0.45;
    }
    else if(city=="sofia" && product=="water")
    {
        cost = quantity*0.80;
    }
    else if(city=="plovdiv" && product=="water")
    {
        cost = quantity*0.70;
    }
    else if(city=="varna" && product=="water")
    {
        cost = quantity*0.70;
    }
    else if(city=="sofia" && product=="beer")
    {
        cost = quantity*1.20;
    }
    else if(city=="plovdiv" && product=="beer")
    {
        cost = quantity*1.15;
    }
    else if(city=="varna" && product=="beer")
    {
        cost = quantity*1.10;
    }
    else if(city=="sofia" && product=="sweets")
    {
        cost = quantity*1.45;
    }
    else if(city=="plovdiv" && product=="sweets")
    {
        cost = quantity*1.30;
    }
    else if(city=="varna" && product=="sweets")
    {
        cost = quantity*1.35;
    }
    else if(city=="sofia" && product=="peanuts")
    {
        cost = quantity*1.60;
    }
    else if(city=="plovdiv" && product=="peanuts")
    {
        cost = quantity*1.50;
    }
    else if(city=="varna" && product=="peanuts")
    {
        cost = quantity*1.55;
    }
    return cost;
  }