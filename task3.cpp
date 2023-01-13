#include <iostream>
using namespace std;
main()
{
    char service;
    char time;
    int min;
    int min2;
    float bill;
    cout<<" Enter which type of custumer you are (residental/primium) press r for residental and p for premium from your keyboard ";
    cin>>service;
    if(service=='r' || service=='R')
    {
        cout<<" Enter minutes ";
        cin>>min;
        if(min<=50)
        {
            bill=10.00;
            cout<<" Your bill is "<<bill<<" dollars"<<endl;
        }
        else
        {
           bill=10.00;
           min2=min-50;
           bill=bill+(min2*0.20); 
           cout<<" Your bill is "<<bill<<" dollars"<<endl; 
        }
    }
    if(service=='p' || service=='P')
    {
           cout<<" Enter D for day time or N for night time ";
           cin>>time;
	   cout<<" Enter minutes ";
           cin>>min;	
           bill=25.00;
           if(time=='D' || time=='d')
           {
            if(min>75)
            {
              min2=min-75;
              bill=bill+(min2*0.10);
              cout<<" Your bill is "<<bill<<" dollars"<<endl;   
            }
            else
            {
              cout<<" Your bill is "<<bill<<" dollars"<<endl;    
            }
           }
           if(time=='N' || time=='n')
           {
            if(min>100)
            {
              min2=min-100;
              bill=bill+(min2*0.05);
              cout<<" Your bill is "<<bill<<" dollars"<<endl;   
            }
            else
            {
              cout<<" Your bill is "<<bill<<" dollars"<<endl;    
            }
           }           
    }
}   