#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of lines:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
    char ch = 'A';
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << ch;
                ch++;
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j;
            }
            cout << endl;
        }
    }
}
