#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declare a vector of integers
    vector<int> myVector;

    // Add elements to the vector using push_back
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);
    myVector.push_back(40);
    myVector.push_back(50);

    // Display the elements of the vector using a for loop
    cout << "Elements of the vector: ";
    for (int i = 0; i < myVector.size(); ++i)
    {
        cout << myVector[i] << " ";
    }
    cout << endl;

    // Access elements using iterators
    cout << "Using iterators: ";
    for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Modify an element at a specific position
    myVector[2] = 300;

    // Display the modified vector
    cout << "Modified vector: ";
    for (int value : myVector)
    {
        cout << value << " ";
    }
    cout << endl;

    // Use vector functions to find the size and check if it's empty
    cout << "Size of the vector: " << myVector.size() << endl;
    cout << "Is the vector empty? " << (myVector.empty() ? "Yes" : "No") << endl;

    // Clear the vector
    myVector.clear();

    // Display the vector after clearing
    cout << "Vector after clearing: ";
    for (int value : myVector)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
