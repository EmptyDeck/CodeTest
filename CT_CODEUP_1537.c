//https://codeup.kr/problem.php?id=1537
//https://codeup.kr/showsource.php?id=24038751

#include <stdio.h>

int n;



int f(x)
{
    if (x == 1) {
        printf("hello");

    }
    else if (x == 2) {
        printf("world");
    }
    return;
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
