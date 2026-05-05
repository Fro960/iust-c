#include <stdio.h>

int main(void)
{
    int a = 5, b = 10, c = 1, d = 3;

    if (a > b && a > c && a > d)
    {
        printf("%d is greater.", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is greater", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is greater.", c);
    }
    else
    {
        printf("%d is greater.", d);
    }
    return 0;
}