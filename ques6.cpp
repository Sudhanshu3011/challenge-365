#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    // for(int i=0;i<=100;i=i+2)
    // {
    //     cout<<i ;
    // }
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
}