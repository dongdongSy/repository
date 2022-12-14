#include <stdio.h>

int main() {

   int n, i, flag = 0;
   printf("Enter a positive integer: ");
   scanf_s("%d", &n);

   // 0 and 1 are not prime numbers
   // change flag to 1 for non-prime number
   if (n == 0 || n == 1)
      flag = 1;

   for (i = 2; n / i != 1; ++i) {

      // if n is divisible by i, then n is not prime
      // check until n-1
      // change flag to 1 for non-prime number
      if (n % i == 0) {
         flag = 1;
         break;
      }
   }
   // flag is 0 for prime numbers
   if (flag == 0)
      printf("%d is a prime number.", n);
   else
      printf("%d is not a prime number.", n);

   return 0;
}