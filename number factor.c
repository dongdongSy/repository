#include <stdio.h>

int main()
{
   int input_number;
   int i;

   printf(" write any number : ");
   scanf("%d", &input_number);

   printf("%d is divided by : ", input_number);

   for (i = 1; i <= input_number; i++)
   {
      if (input_number % i == 0)
      {
         printf("%d ", i);
      }
   }
   printf("\n");
   return 0;
}
