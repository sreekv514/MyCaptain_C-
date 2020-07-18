//Program to read time in HH:MM:SS format and convert into total seconds using class

#include<iostream>
#include<iomanip>
using namespace std;

class time
{
private:
    int hr, mint, sec, totalsec;
public:
    settime(int h, int m, int s)    // to initialize the time in hours, minutes and seconds
    {
        hr = h;
        mint = m;
        sec = s;
    }
    int timeinsec()                 // time conversion into seconds
    {
        totalsec = (hr*3600)+(mint*60)+sec;
        return totalsec;
    }
    displaytime()                   // display output in specified format
    {
        cout<<"\n\n\t The time you entered is: ";
        cout<<setfill('0')<<setw(2)<<hr;
        cout<<" : "<<setfill('0')<<setw(2)<<mint;
        cout<<" : "<<setfill('0')<<setw(2)<<sec;
        cout<<"\n\n\t Above time in seconds is: "<<totalsec<<endl;
    }
} t1; 

int main()
{
    char choice = 'Y';
    int h, m, s;

    cout<<"\n\tProgram to read time in HH:MM:SS format and convert it into seconds";
    cout<<"\n      -----------------------------------------------------------------------";

    while(choice == 'Y' || choice == 'y')
    {
        cout<<"\n\n\tEnter the following values:";
        cout<<"\n\tHours  : ";
        cin>>h;
        cout<<"\tMinutes: ";
        cin>>m;
        cout<<"\tSeconds: ";
        cin>>s;

        try
        {
            if((h<=24 && m<=60 && s<=60) || (h==0)) // to give option of setting only minutes and seconds, or all 3 ie HH:MM:SS
            {
                t1.settime(h, m, s);
                t1.timeinsec();
                t1.displaytime();
            }
            else
                throw(604);     // random code chosen: windows error 604 is wrong info specified
        }
        catch (...)
        {
            cout<<"\n\n\t\t *****ERROR***** \n";
            if(h>24)
                cout<<"\t   Hours entered cannot exceed 24!\n";
            if(h!=0 && m>60)
                cout<<"\t Minutes entered cannot exceed 60!\n";
            if(h!=0 && s>60)
                cout<<"\t Seconds entered cannot exceed 60!\n";
        }

        cout<<"\n\n\t Would you like to run the program again? Y/N: ";
        cin>>choice;
    }

    cout<<"\n\n\t End of program... Press X to exit.\n\t ";
    cin>>choice;

    return 0;
}
