//https://www.acmicpc.net/problem/2753
//https://www.acmicpc.net/source/42091980

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
   int years;

   
   scanf("%d", &years);

   if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0)
   {
      printf("1");
   }
   else printf("0");

   return 0;
}