//https://codeup.kr/problem.php?id=1403
//https://codeup.kr/showsource.php?id=25382274

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100
int main(void)
{
   
   int n;
   int arr[SIZE];
   scanf("%d",&n);
   for (int i = 0; i < n; i++)
   {   
      scanf("%d", &arr[i]);
   }
   for (int i = 0; i < 2; i++) {
      for (int i = 0; i < n; i++)
         printf("%d\n", arr[i]);
   }
   return 0;
}
