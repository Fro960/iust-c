#include <iostream>
using namespace std;

int main(void)
{
    bool employee = true;
    bool isHr = false;
    int secLevel = 3;

    if (isHr || (employee && secLevel < 2))
    {
        cout << "Authorised" << endl;
    }
    else
    {
        cout << "Not Authorised" << endl;
    }

    return 0;
}

