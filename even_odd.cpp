#include <iostream>
using namespace std;

int main()
{

    int n;
    while (n > 0)
    {
        cout << "Enter a number:";
        cin >> n;

        if (n % 2 == 0)
        {
            cout << "Even"<<endl;
        }
        else
        {
            cout << "Odd";
            break;
        }
    }
}