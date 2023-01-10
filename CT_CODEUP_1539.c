//https://codeup.kr/problem.php?id=1539
//https://codeup.kr/showsource.php?id=24041306

#include <stdio.h>

int n;



int f(x)
{
    if (x == 0) {
        printf("false");

    }
    else{
        printf("true");
    }
    return;
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
