#include<iostream>
using namespace std;
int great(int numb1, int numb2, int numb3);
main()
{
    int numb1;
    int numb2;
    int numb3;
    cout<<"enter first no :";
    cin>>numb1;
    cout<<"enter second no :";
    cin>>numb2;
    cout<<"enter third no :";
    cin>>numb3;
    int greatest = great(numb1, numb2, numb3);
    cout<<"the greater is :"<<greatest;


}
 int great(int numb1, int numb2, int numb3)
 {
    if(numb1>numb2 && numb1>numb3)
    {
        return numb1;
    }
    else if(numb2>numb1 && numb2>numb3)
    {
         return numb2;
    }
    else if(numb3>numb1 && numb3>numb2)
    {
         return numb3;
    }
    else
    {
        return numb1;
    }

 }