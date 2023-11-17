#include<iostream>
using namespace std;

int main()
{
    //character to the ascii value 
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    cout<<"The ASCII value of the character is:";
    cout<<int(ch);
    cout<<endl;

    //ascii value to the character
    int x;
    cout<<"Enter the number:";
    cin>>x;
    cout<<"The character of the given ASCII value is:";
    char c=(char)x;
    cout<<c;
}