#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > e)
                {
                    printf("%d is the greatest!", a);
                }
                else 
                {
                    printf("%d is the greatest!", e);
                }
            }
            else
            {
                if (d > e)
                {
                    printf("%d is the greatest!", d);
                }
                else
                {
                    printf("%d is the greatest!", e);
                }
            }
        }
        else
        {
            if (c > d)
            {
                if (c > e)
                {
                    printf("%d is the greatest!", c);
                }
                else 
                {
                    printf("%d is the greatest!", e);
                }
            }
            else
            {
                if (d > e)
                {
                    printf("%d is the greatest!", d);
                }
                else
                {
                    printf("%d is the greatest!", e);
                }
            }
        }
    }
    else 
    {
        if (b > c)
        {
            if (b > d)
            {
                if (b > e)
                {
                    printf("%d is the greatest!", b);
                }
                else
                {
                    printf("%d is the greatest!", e);
                }
            }
            else
            {
                if (d > e)
                {
                    printf("%d is the greatest!", d);
                }
                else
                {
                    printf("%d is the greatest!", e);
                }
            }
        }
        else
        {
            if (c > d)
            {
                if (c > e)
                {
                    printf("%d is the greatest!", c);
                }
                else
                {
                    printf("%d is the greatest!", e);
                }
            }
            else
            {
                if (d > e)
                {
                    printf("%d is the greatest!", d);
                }
                else
                {
                    printf("%d is the greatest!", e);
                }
            }
        }
    }

    return 0;
}