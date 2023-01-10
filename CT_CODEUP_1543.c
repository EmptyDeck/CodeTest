//https://codeup.kr/problem.php?id=1543
//https://codeup.kr/showsource.php?id=24042090

#include <stdio.h>

int n;



int f(x)
{
    for (int i = 0; i < x; i++) {
        printf("love\n");
    }

    return;
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
