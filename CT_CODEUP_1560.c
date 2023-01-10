//https://codeup.kr/problem.php?id=1560
//https://codeup.kr/showsource.php?id=25588779

#include <stdio.h>

long long int n, m;
long long int f(long long x, long long y) {


	long long int cha;

	cha = x - y;

	if (cha < 0) {
		cha = -cha;
	}
	return cha;
}
int main()
{
  scanf("%lld%lld", &n, &m);
  printf("%lld\n", f(n, m));
}
