//Program to check whether a number can be expressed as the sum of two prime numbers
#include<iostream>
using namespace std;

void express_sum(int num);
int checkprime(int a);

int main()
{
    int num;
    char choice = 'y';

    cout<<"Program to express any number as the sum of two prime numbers\n";

    do
    {
        cout<<"\n\nEnter a positive integer: ";
        cin>>num;
        
        if(checkprime(num))
        {
            cout<<"\n"<<num<<" is a prime number.\n";
            cout<<"So it cannot be expressed as the sum of 2 prime numbers.\n";
        }
        else
        {
            express_sum(num);
        }
        
        cout<<"\n\nWould you like to run the program again? Y/N: ";
        cin>>choice;
        
    }while(choice == 'y' || choice=='Y');

    cout<<"\n\n\t End of program. Press X to exit...\n";
    cin>>choice;
    return 0;
}

int checkprime(int a)
{
    if (a <= 1)
        return 0;
            
    for (int i = 2; i < a; i++)
       {
           if(a%i == 0)
               return 0;
       }
    return 1;
}

void express_sum(int num)
{
    int i, j;
    cout<<"\n";
    for(i=1, j=num-1; i<num && i<=j; i++, j--)
    {
       if(checkprime(i) && checkprime(j))
       {
           cout<<num<<" = "<<i<<" + "<<j<<"\n";
           continue;
       }
    }
}
