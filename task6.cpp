#include <iostream>
using namespace std;
main()
{
    int nights;
    string month;
    float studio;
    float appartment;
    float money;
    float discount1;
    float discount2;
    //available for selection are may,octuber,june,september,july august
    cout<<" Enter month of stay ";
    cin>>month;
    cout<<" Enter number of nights stay in a hotel ";
    cin>>nights;
    if(month=="May" || month=="Octuber")
    {
        studio=50*nights;
        appartment=65*nights;
        if(nights>7 && nights<15)
        {
           discount1=studio*0.05;
           studio=studio-discount1;
        }
        else if(nights>14)
        {
           discount1=studio*0.3;
           studio=studio-discount1;
           discount2=appartment*0.1;
           appartment=appartment-discount2;
        }
        cout<<" Studio: "<<studio<<"$"<<endl;
        cout<<" Appartment: "<<appartment<<"$"<<endl;
    }
    else if(month=="June" || month=="September")
    {
        studio=75.20*nights;
        appartment=68.70*nights;
         if(nights>14)
        {
           discount1=studio*0.2;
           studio=studio-discount1;
           discount2=appartment*0.1;
           appartment=appartment-discount2;
        }
        cout<<" Studio: "<<studio<<"$"<<endl;
        cout<<" Appartment: "<<appartment<<"$"<<endl;
    }
    else if(month=="July" || month=="August")
    {
        studio=76*nights;
        appartment=77*nights;
         if(nights>14)
        {
           discount2=appartment*0.1;
           appartment=appartment-discount2;
        }
        cout<<" Studio: "<<studio<<"$"<<endl;
        cout<<" Appartment: "<<appartment<<"$"<<endl;
    }
}