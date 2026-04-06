#include <stdio.h>

int main()
{
   float r, area, peri;

   printf("Enter redius: ");
   scanf("%f", &r);
   
   area = 3.14 * r * r;
   peri = 2 * 3.14 * r;

   printf("area = %f\n perimeter = %f\n", area, peri);

   return 0;

}