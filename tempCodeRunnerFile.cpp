#include <iostream>
using namespace std;

int main()
{
    int n, hcf;
    cout << "Enter the Number:";
    cin >> n;

    // highest common factor of the number
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            hcf = i;
        }
    }

    cout << "The HCF of the number" << n << "is :" << hcf;
}