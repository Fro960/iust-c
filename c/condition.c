#include <stdio.h>

int main(void)
{
    int per;
    printf("Enter percentage: ");
    scanf("%d", &per);

    if (per > 90)
    {
        printf("Grade A\n");
    }
    else if (per > 80 && per < 90)
    {
        printf("Grade B\n");
    }
    else if (per > 70 && per < 80)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("FAIL\n");
    }

    return 0;
}