#include <stdio.h>

int main(void)
{
    int bricks;
    printf("Enter bricks: ");
    scanf("%d", &bricks);

    for (int i =1; i <= bricks; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}