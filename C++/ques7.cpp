#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,a;
    cout<<"Enter the number:";
    cin>>n;

    while(n!=0)
    {
        a=n%10;
        sum=sum +a;
        n=n/10;

    }
    cout<<"The sum of the digits is "<<sum;
}