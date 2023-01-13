#include <iostream>
using namespace std;
main()
{
    float marks1;
    float marks2;
    float marks3;
    float marks4;
    float marks5;
    float obtained_marks;
    float percentage;
    char grade;
    string name;
    //total marks of each subject is 100
    //grand total will be 500
    cout<<" Enter name of student: ";
    cin>>name;
    cout<<" Enter Marks of English ";
    cin>>marks1;
    cout<<" Enter Marks of Maths ";
    cin>>marks2;
    cout<<" Enter Marks of Chemistry ";
    cin>>marks3;
    cout<<" Enter Marks of Social Science ";
    cin>>marks4;
    cout<<" Enter Marks of Biology ";
    cin>>marks5;
    obtained_marks=marks1+marks2+marks3+marks4+marks5;
    percentage=(obtained_marks/500)*100;
    cout<<" Student Name: "<<name<<endl;
    cout<<" Got "<<obtained_marks<<" marks out of 500 "<<endl;
    cout<<" Percentage: "<<percentage<<endl;
    if(percentage>=90 && percentage<=100)
    {
        cout<<" Grade: A+ ";
    }
     else if(percentage>=80 && percentage<90)
    {
        cout<<" Grade: A ";
    }
     else if(percentage>=70 && percentage<80)
    {
        cout<<" Grade: B+ ";
    }
     else if(percentage>=60 && percentage<70)
    {
        cout<<" Grade: B ";
    }
     else if(percentage>=50 && percentage<60)
    {
        cout<<" Grade: C ";
    }
     else if(percentage>=40 && percentage<50)
    {
        cout<<" Grade: D ";
    }
    else if(percentage<40 )
    {
        cout<<" Grade: F ";
    }
}











