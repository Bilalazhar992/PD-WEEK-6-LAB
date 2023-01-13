#include <iostream>
using namespace std;
main()
{
    float quantity;
    string fruit;
    string day;
    float payment;
    cout<<" Enter day of week first letter must be capital ";
    cin>>day;
    
    if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday" )
    {
        cout<<" Enter fruit ";
        cin>>fruit;
        cout<<" Enter Quantity ";
        cin>>quantity;
        if(fruit=="banana")
        {
            payment=quantity*2.50;
        }
        else if(fruit=="apple")
        {
            payment=quantity*1.20;
        }
        else if(fruit=="orange")
        {
            payment=quantity*0.85;
        }
        else if(fruit=="grapefruit")
        {
            payment=quantity*1.45;
        }
        else if(fruit=="kiwi")
        {
            payment=quantity*2.70;
        }
        else if(fruit=="pineapple")
        {
            payment=quantity*5.50;
        }
        else if(fruit=="grapes")
        {
            payment=quantity*3.85;
        }
        else
        {
            cout<<" An invalid Fruit ";
        }
        cout<<"You have to pay "<<payment<<" dollars ";
    }
     else if (day=="Saturday" || day=="Sunday")
    {
        cout<<" Enter fruit ";
        cin>>fruit;
        cout<<" Enter Quantity ";
        cin>>quantity;
        if(fruit=="banana")
        {
            payment=quantity*2.70;
        }
        else if(fruit=="apple")
        {
            payment=quantity*1.25;
        }
        else if(fruit=="orange")
        {
            payment=quantity*0.90;
        }
        else if(fruit=="grapefruit")
        {
            payment=quantity*1.60;
        }
        else if(fruit=="kiwi")
        {
            payment=quantity*3.00;
        }
        else if(fruit=="pineapple")
        {
            payment=quantity*5.60;
        }
        else if(fruit=="grapes")
        {
            payment=quantity*4.20;
        }
        else
        {
            cout<<" An invalid Fruit ";
        }
        cout<<"You have to pay "<<payment<<" dollars ";
    }
    else
        {
            cout<<" An invalid Day ";
        }
}