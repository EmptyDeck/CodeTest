//https://codeup.kr/problem.php?id=1542
//https://codeup.kr/showsource.php?id=24042073
#include <stdio.h>

int n;



int f(x)
{
    int A = 0;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            A = A + 1;
        }
       


    }
    if (A != 0) {
        printf("composite");
    }
    else {
        printf("prime");
    }

    return;
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
