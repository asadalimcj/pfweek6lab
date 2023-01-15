#include<iostream>
using namespace std;
float money(float budget, string type, int people);
main()
{
   int people;
   float budget;
   string type;
   cout<<"enter the your budget:";
   cin>>budget;
   cout<<"enter type of ticket:";
   cin>>type;
   cout<<"enter number of member:";
   cin>>people;
   float cost = money(budget, type, people);
   if(cost>0)
   {
    cout<<"yes! you have "<<cost<<"QR left"<<endl;
   }    
   else if(cost<0)
   {
    cout<<"not enough money! you need "<<cost*-1<<"QR."<<endl;
   }
}
   float money(float budget, string type, int people)
   {
     float cost;
     if(type=="normal" && (people>=1 && people<=4))
     {
        cost = budget-(75*budget)/100;
        cost = cost-(people*249.99); 
     }
     else if(type=="normal" && (people>=5 && people<=9))
     {
        cost = budget-(60*budget)/100;
        cost = cost-(249.99*people);
     }
     else if(type=="normal" && (people>=10 && people<=24))
     {
        cost = budget-(50*budget)/100;
        cost = cost-(249.99*people);
     }
     else if(type=="normal" && (people>=25 && people<=49))
     {
        cost = budget-(40*budget)/100;
        cost = cost-(249.99*people);
     }
     else if(type=="normal" && people>50)
     {
        cost = budget-(25*budget)/100;
        cost = cost-(249.99*people);
     }
     if(type=="vip" && (people>=1 && people<=4))
     {
        cost = budget-(75*budget)/100;
        cost = cost-(499.99*people); 
     }
     else if(type=="vip" && (people>=5 && people<=9))
     {
        cost = budget-(60*budget)/100;
        cost = cost-(499.99*people);
     }
     else if(type=="vip" && (people>=10 && people<=24))
     {
        cost = budget-(50*budget)/100;
        cost = cost-(499.99*people);
     }
     else if(type=="vip" && (people>=25 && people<=49))
     {
        cost = budget-(40*budget)/100;
        cost = cost-(499.99*people);
     }
     else if(type=="vip" && people>50)
     {
        cost = budget-(25*budget)/100;
        cost = cost-(499.99*people);
     }
     return cost;
      
   }