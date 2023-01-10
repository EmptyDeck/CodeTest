//https://www.acmicpc.net/problem/9498
//https://www.acmicpc.net/source/42090290
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int x;
   scanf("%d", &x);

   if (x >= 0 && x <= 100)
   {
      if (x <= 100 && x >= 90)
         printf("A\n");
      else if(x < 90 && x >= 80)
         printf("B\n");
      else if (x < 80 && x >= 70)
         printf("C\n");
      else if (x < 70 && x >= 60)
         printf("D\n");
      else if (x < 60 && x >= 0)
         printf("F\n");
   }

   return 0;
}