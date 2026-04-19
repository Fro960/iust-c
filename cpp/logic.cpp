#include <iostream>
using namespace std;

int main(void)
{
    bool employee = true;
    bool isHr = false;
    int secLevel = 3;

    if (!(isHr) && (employee || secLevel))
    {
        cout << "Authorised";
    }
    else
    {
        cout << "Not Authorised";
    }

    return 0;
}

