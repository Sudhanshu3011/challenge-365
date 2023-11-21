#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the x-cordinate:";
    cin >> x;
    cout << "Enter a y-cordinate:";
    cin >> y;

    if(x>0)
    {
        if(y>0)
        {
            cout<<"First cordinate";
        }
        else{
            cout<<"Fourth cordinate";
        }
    }
    else{
        if(y>0)
        {
            cout<<"Second cordinate";
        }
        else{
            cout<<"Third cordinate";
        }
    }
}