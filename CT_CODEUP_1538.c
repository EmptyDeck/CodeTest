//https://codeup.kr/problem.php?id=1538
//https://codeup.kr/showsource.php?id=24038765

#include <stdio.h>

int n;



int f(x)
{
    if (x % 2 == 0) {
        printf("even");

    }
    else if (x % 2 == 1) {
        printf("odd");
    }
    return;
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
