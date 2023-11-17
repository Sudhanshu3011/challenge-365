#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a number:";
    cin >> a;
    cout << "Enter a number:";
    cin >> b;
    cout << "Enter a number:";
    cin >> c;

    // the grater number of the three is
    if (a > b && a > c)
        cout << "The greater number is " << a;
    if (b > a && b > c)
        cout << "The greater number is " << b;
    if (c > a && c > b)
        cout << "The greater number is " << c;
}
