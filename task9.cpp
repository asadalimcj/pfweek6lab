#include<iostream>
#include<cmath>
using namespace std;

int vollyball(string year, int holiday, int weekend);
main()
{
   string year;
   float holidays;
   int weekend;
   float plays;
   float plays2;
   cout<<"enter year:";
   cin>>year;
   cout<<"enter holidays :";
   cin>>holidays;
   cout<<"enter weekend :";
   cin>>weekend;
   float V1 = (holidays*2)/3;
   int weekend2 = 48-weekend;
   float V2 = (weekend2*3)/4;
   plays = V1+V2+weekend;
   int play = floor(plays);

   if(year=="normal")
   {
      cout<<play;
   }
   if(year=="leap")
   {
    plays2 = (15*play)/100+play;
    cout<<plays2;
   }
}
  