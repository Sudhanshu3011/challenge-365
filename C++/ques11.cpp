#include <iostream>
using namespace std;

// floyd's traingle
int main()
{
    int n, a = 1;
    cout << "Enter the number of lines:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
           cout<<a<<" ";
           a++;
        }
        cout<<endl;
    }
}