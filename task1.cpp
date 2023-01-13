#include <iostream>
using nmaespace std;
main()
{
    string temperature;
    string humidity;
    cout<<" Enter temperature status Either warm or cold ";
    cin>>temperature;
    cout<<" Enter humidity status Either dry or humid ";
    cin>>humidity;
    if (temperature=="warm")
    {
        if(humidity=="dry")
        {
            cout<<" Play tennis ";
        }
        else
        {
            cout<<"Swim ";
        }
    }
    else
    {
        if(humidity=="dry")
        {
            cout<<" Play baseketball ";
        }
        else
        {
            cout<<"Watch Tv ";
        }
    }
}