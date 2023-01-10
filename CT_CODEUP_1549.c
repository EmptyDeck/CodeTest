//https://codeup.kr/problem.php?id=1549
//https://codeup.kr/showsource.php?id=24043776

#include <stdio.h>

long long int n;



long long int abs(long long int x)
{
    if (0 > x) {

        return x * (-1);
    }
    else {
        return x;
    }
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", abs(n));
  return 0;
}
