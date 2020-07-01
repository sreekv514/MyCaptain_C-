#include<iostream>
using namespace std;

int main()
{
// 1. C++ program to find size of int, float, double and char
cout<<"\n\t1. Program to find size of data types:\n\n";
cout<<"\t Size of char  : "<<sizeof(char)<<" byte\n";
cout<<"\t Size of int   : "<<sizeof(int)<<" bytes\n";
cout<<"\t Size of float : "<<sizeof(float)<<" bytes\n";
cout<<"\t Size of double: "<<sizeof(double)<<" bytes\n\n\n";

// 2. C++ program to find the product of 2 numbers given by user
float n1, n2, ans;
cout<<"\n\t2. Program to find the product of 2 numbers\n\n";
cout<<"\t Enter two numbers separated by a single space: ";
cin>>n1>>n2;
ans = n1*n2;
cout<<"\n\t Product of the given numbers:\n";
cout<<"\t "<<n1<<" * "<<n2<<" = "<<ans<<endl;

return 0;
}
