#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string fullName;
    cout << "Enter full name: ";
    getline(cin, fullName);
    fullName.at(0) = 'w';
    cout << fullName.at(1) << endl;
    return 0;
}