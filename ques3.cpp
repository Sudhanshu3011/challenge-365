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

    // for the valid triangle the sum of any two sides of the triangle should be largesr than the
    // third one
    if (a + b > c and a + c > b and b + c > a)
    {
        cout << "The triangle is a valid triangle.";
    }
    else
    {
        cout << "The traingle is not a valid triangle.";
    }
}