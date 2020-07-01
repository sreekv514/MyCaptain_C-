// Program to check if the person is eligible to vote or not

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string username;
    int age, min_age = 18;
    char choice = 'y', DUMMY;

    cout<<"\n\n\t ****** Voting Eligibility Checking System ******\n\n";

    do
    {
        cout<<"\t Enter name: ";
        cin>>DUMMY;
        getline(cin, username);
        cout<<"\n\t Enter age: ";
        cin>>age;

        if(age>=min_age)
            cout<<"\n\n\t *** "<<DUMMY<<username<<" is ELIGIBLE to vote. ***\n\n";
        else
            cout<<"\n\n\t *** "<<DUMMY<<username<<" is NOT ELIGIBLE to vote. ***\n\n";

        cout<<"\n\t Would you like to check eligibility for another person? Y/N: ";
        cin>>choice;
    }while (choice == 'y' || choice == 'Y');

    cout<<"\n\t Press X to exit...  ";
    cin>>DUMMY;
    return 0;
}
