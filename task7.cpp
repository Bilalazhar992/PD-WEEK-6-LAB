#include <iostream>
using namespace std;
main()
{
    int exam_time;
    int exam_time_minute;
    int arrival_time;
    int arrival_time_minute;
    int difference;
    int difference1;
    int helper;
    cout<<" Enter exam time (hours): ";
    cin>>exam_time;
    cout<<" Enter exam time (minutes): ";
    cin>>exam_time_minute;
    cout<<" Enter arrival time (hours): ";
    cin>>arrival_time;
    cout<<" Enter arrival time (minutes): ";
    cin>>arrival_time_minute;
    if(exam_time==arrival_time)
    {
        if(exam_time_minute==arrival_time_minute)
        {
            cout<<"On time ";
        }
        else if(exam_time_minute>arrival_time_minute)
        {
            difference=exam_time_minute-arrival_time_minute;
            if(difference<=30)
            {
                cout<<"On time"<<endl;
                cout<<difference<<" minutes before exam starts ";
            }
            if(difference>30)
            {
                cout<<"Early"<<endl;
                cout<<difference<<" minutes before exam starts ";
            }    
        }
        else if(exam_time_minute<arrival_time_minute)
        {
                difference=arrival_time_minute-exam_time_minute;
                cout<<"Late"<<endl;
                cout<<difference<<" minutes after exam starts "<<endl;
        }
	 cout<<" hh:mm time format ";        
    }
    else if(exam_time>arrival_time)
    {
        difference1=exam_time-arrival_time;
        difference=exam_time_minute-arrival_time_minute;
        if(exam_time_minute>arrival_time_minute)
        {
            cout<<" Early "<<endl;
            if(difference<10)
            {
                cout<<difference1<<" : 0"<<difference<<" before exam starts ";
            }
            if(difference>10)
            {
                cout<<difference1<<" : "<<difference<<" before exam starts ";
            }
        }
        else if(exam_time_minute==arrival_time_minute)
        {
            cout<<" Early "<<endl;
            cout<<difference1<<" : 00"<<" before exam starts ";
        }
        else if(exam_time_minute<arrival_time_minute)
        {   
            difference1=difference1-1;  
            helper=60-arrival_time_minute;
            helper=helper+exam_time_minute;
            difference=helper;
            cout<<" Early "<<endl;
            cout<<difference1<<" : "<<difference<<" before exam starts "<<endl;
        }
	 cout<<" hh:mm time format ";
    }
    else if(exam_time<arrival_time)
    {
         difference1=arrival_time-exam_time;
         difference=arrival_time_minute-exam_time;
        if(exam_time_minute==arrival_time_minute)
        {
            cout<<" Late "<<endl;
            cout<<difference1<<" : 00 after exam starts ";
        }
        if(exam_time_minute<arrival_time_minute)
        {
            cout<<" Late "<<endl;
            cout<<difference1<<" : "<<difference<<" after exam starts ";
        }
        if(exam_time_minute>arrival_time_minute)
        {
            cout<<" Late "<<endl;
            difference1=difference1-1; 
            helper=60-exam_time_minute;
            helper=helper+arrival_time_minute;
	    difference=helper;	
            cout<<difference1<<" : "<<difference<<" after exam starts "<<endl;
        }
	cout<<" hh:mm time format ";
    }
    
    
}