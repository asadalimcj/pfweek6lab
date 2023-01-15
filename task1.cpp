#include<iostream>
using namespace std;
char calculate_grade(int marks);
main()
{
    int marks;
    char grade;
    cout<<"enter your marks(1-100)";
    cin>>marks;
    char grading = calculate_grade(marks);
    cout<<"the grade is :"<<grading;
}
  char calculate_grade(int marks)
  {
    char grade;
    if(marks<50)
    {
       grade = 'f';
    }
    else if(marks>=50 && marks<=60)
    {
        grade = 'E';
    }
    else if(marks>=61 && marks<=70)
    {
        grade = 'D';
    }
    if(marks>=71 && marks<=80)
    {
        grade = 'C';
    }
    if(marks>=81 && marks<=85)
    {
        grade = 'B';
    }
    if(marks>85)
    {
        grade = 'A';
    }
    return grade;
  }