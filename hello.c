#include <stdio.h>

int main()
{
   int s, area, peri;

   printf("Enter s:");
   scanf("%d", &s);

   area = s * s;
   peri = 4 * s;

   printf("Area is = %d\n", area);
   printf("Perimeter is = %d\n", peri);

   return 0;
}