#include <iostream>
using namespace std;

int main(void)
{
    int age;
    bool citizen = true;

    cout << "Enter age: ";
    cin >> age;

    if (age >= 18 && citizen)
    {
        cout << "Eligible to vote!" << endl;
    }
    else
    {
        cout << "Not eligible to vote!" << endl;
    }

    return 0;
}

