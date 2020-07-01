//Program to access the elements of an array using pointers
#include<iostream>
using namespace std;
int main()
{
    int arrsize, i, *p;
    int defval = 6;
    char ch;
    cout<<"\n\t Program to read input to an array and display array elements using pointers";
    cout<<"\n    -------------------------------------------------------------------------------------\n";
    cout<<"\n\n\t Set array size: ";
    cin>>arrsize;
    int arr[arrsize];
    cout<<"\n\t Values set by default in array. Would you like to insert other values? Y/N: ";
    cin>>ch;
    if(ch =='y' || ch == 'Y')
    {
        cout<<endl;
        for(i=0; i<arrsize; i++)
        {
            cout<<"\t Remaining "<<arrsize-i<<" elements to insert in array.\n\t Enter value: ";
            cin>>arr[i];
        }
    }
    else
    {
        for(i=0; i<arrsize; i++)
        {
            arr[i]= defval;
            defval*=2;
        }
    }

    p = arr;
    cout<<"\n\n\t Array status: ";
    for(i=0; i<arrsize; i++)
    {
        cout<<*p<<"  ";
        ++p;
    }
    cout<<"\n\n\t End of program. Press X to exit.\n\t ";
    cin>>ch;
}
