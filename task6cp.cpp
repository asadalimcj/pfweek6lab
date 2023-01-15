#include<iostream>
using namespace std;
float lowest_price(int kilometer, string time);
main()
{
   int kilometer;
   string time;
   cout<<"eneter distance :";
   cin>>kilometer;
   cout<<"enter time :";
   cin>>time;
   float final = lowest_price(kilometer, time);
   cout<<"the loweswt price is :"<<final;
}
  float lowest_price(int kilometer, string time)
  {
    float price;
    if(kilometer<20 && time=="day")
    {
      price = 0.70+(kilometer*0.79);
    }
    else if(kilometer<20 && time=="night")
    {
        price = 0.70+(kilometer*0.90);
    }
    else if(kilometer>=20 && time=="day")
    {
       price = kilometer*0.09;
    }
    else if(kilometer>=20 && time=="night")
    {
       price = kilometer*0.09;
    }
    if(kilometer>=100 && time=="day")
    {
      price = kilometer*0.06;
    }
    if(kilometer>=100 && time=="night")
    {
      price = kilometer*0.06;
    }
    return price;
  }