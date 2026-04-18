#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string name;
    int age;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "My name is " << name << " and i'm " << age <<" years old" << "\n";
    return 0;
}