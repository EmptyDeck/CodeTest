//https://codeup.kr/problem.php?id=1550
//https://codeup.kr/showsource.php?id=24045706

#include <stdio.h>

long long int n;



int sqrt(long long int x)
{

    long long int i = 0;

    while (1) {

        if (n >= i * i && n < (i + 1) * (i + 1)) {
            return i;
        }
        i++;
    }
}
int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}
