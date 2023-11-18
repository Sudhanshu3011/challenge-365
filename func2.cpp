#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int comb(int n, int r)
{
    int cmb;
    return cmb = (fact(n)) / (fact(r) * fact(n - r));
}

int main()
{
    int n;
    cout << "Enter the number of lines:";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for(int k=n-i;k>0;k--)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
             cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}