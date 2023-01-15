#include<iostream>
using namespace std;
string check_title(int age, char gender);
main()
{
  int age;
  char gender;
  cout<<"enter age :";
  cin>>age;
  cout<<"enter gender :";
  cin>>gender;
  string title = check_title(age, gender);
  cout<<"title is :"<<title;

} 
  string check_title(int age, char gender)
  {
     string title;
     if(age>=16 && gender=='m')
     {
        title = "Mr.";
     }
     else if(age<16 && gender=='m')
     {
        title = "Master";
     }
     else if(age>=16 && gender=='f')
    {
        title = "Ms.";
    }
    else if(age<16 && gender=='f')
    {
        title = "Girl.";
    }
    return title;
  }