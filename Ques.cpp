#include <iostream>
using namespace std;

int main()
{
    float cp,sp,profit,loss;
    cout<<"Enter the Cost price:";
    cin>>cp;
    cout<<"Enter the Selling price:";
    cin>>sp;

    if(sp-cp>0)
    {
        cout<<"Profit of:"<<sp-cp;
    }
    else if(sp-cp<0)
    {
        cout<<"Loss of:"<<cp-sp;
    }
    else
    {
        cout<<"No profit No loss";
    }
}
