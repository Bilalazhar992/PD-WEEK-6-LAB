#include <iostream>
using namespace std;
main()
{
    string month;
    int date;
    cout<<" Enter month: ";
    cin>>month;
    cout<<" Enter your date of birth: ";
    cin>>date;
    if(month=="March" && date>=21 || month=="April" && date<=19)
    {
        cout<<" Your star is Aries ";
    }
    else if(month=="May"&&date<=20 || month=="April"&&date>=20)
    {
        cout<<" Your star is Taurus ";
    }
    else if(month=="May"&&date>20 || month=="June"&&date<=20)
    {
        cout<<" Your star is Gemini ";
    }
    else if(month=="June"&&date>20 || month=="July"&&date<=22)
    {
        cout<<" Your star is Cancer ";
    }
    else if(month=="August"&&date<=22 || month=="July"&&date>22)
    {
        cout<<" Your star is Leo ";
    }
    else if(month=="August"&&date>22 || month=="September"&&date<=22)
    {
        cout<<" Your star is Virgo ";
    }
    else if(month=="September"&&date>22 || month=="Octuber"&&date<=22)
    {
        cout<<" Your star is Libra ";
    }
    else if(month=="November"&&date<22 || month=="Octuber"&&date>22)
    {
        cout<<" Your star is Scorpio ";
    }
    else if(month=="November"&&date>21 || month=="December"&&date<22)
    {
        cout<<" Your star is Sagittarius ";
    }
    else if(month=="December"&&date>21 || month=="January"&&date<20)
    {
        cout<<" Your star is Capricon ";
    }
    else if(month=="February"&&date<19 || month=="January"&&date>19)
    {
        cout<<" Your star is Aquarius ";
    }
    else if(month=="February"&&date>18 || month=="March"&&date<21)
    {
        cout<<" Your star is Pisces ";
    }
}