#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string fullName;
    cout << "Enter full name: ";
    getline(cin, fullName);
    cout << "My name is " << fullName << endl;
    return 0;
}