#include <stdio.h>

int main(void)
{
    int per;
    int marks = 0;
    float const TM = 500.0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks %d: ", i);
        scanf("%d", &per);
        marks += per;
    }

    float perc = marks / TM * 100;    
    printf("perc is %f\n", perc);

    if (perc > 90)
    {
        printf("Grade A\n");
    }
    else if (perc > 80 && per < 90)
    {
        printf("Grade B\n");
    }
    else if (perc > 70 && per < 80)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("FAIL\n");
    }

    return 0;
}