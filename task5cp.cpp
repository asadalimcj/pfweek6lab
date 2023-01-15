#include<iostream>
using namespace std;
float total_income(string ticket, int rows, int col);
main()
{
    int rows;
    int col;
    string ticket;
    cout<<"enter ticket type";
    cin>>ticket;
    cout<<"enter rows :";
    cin>>rows;
    cout<<"enter columns :";
    cin>>col;
    float revenue = total_income(ticket, rows, col);
    cout<<revenue<<" is total money";
}
  float total_income(string ticket, int rows, int col)
  {
    float earn;
    if(ticket=="premiere")
    {
        earn = rows*col*12.0;
    }
    if(ticket=="normal")
    {
        earn = rows*col*7.50;
    }
    return earn;
  }