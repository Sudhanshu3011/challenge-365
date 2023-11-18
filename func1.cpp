#include<iostream>
using namespace std;
int fact(int n)
{
    int fact=1;
    for(int i=n;i>0;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int comb(int n,int r)
{
    int cmb;
    return cmb=(fact(n))/(fact(r)*fact(n-r));
}

int main()
{
    int n,r;
    cout<<"Enter the n:";
    cin>>n;
    cout<<"Enter the r:";
    cin>>r;
    cout<<"The value of combination is:"<<comb(n,r);

    return 0;

}