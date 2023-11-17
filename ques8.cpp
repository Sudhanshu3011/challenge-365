#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=0, rev = 0, a;
    cout << "Enter the number:";
    cin >> n;

    while (n != 0)
    {
        
        a = n % 10;
        rev = rev*10 + a;
        cout<<rev<<endl;
        n = n / 10;
        i++;
        
    }
    cout << "The sum of the digits is " << rev;
}