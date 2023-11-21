#include <iostream>
using namespace std;

int main()
{

    int l, b;
    cout << "Enter the length:";
    cin >> l;
    cout << "Enter the breadth:";
    cin >> b;

    cout << "The perimeter of rectangle:" << 2 * (l + b) << endl;
    cout << "The area of rectangle:" << l * b << endl;

    if ((l * b) > (2 * (l + b)))
    {
        cout << "The area is large " << l * b;
    }

    else
    {
        cout << "The perimeter is large " << 2 * (l + b);
    }
}