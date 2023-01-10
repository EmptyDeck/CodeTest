//https://codeup.kr/problem.php?id=1555
//https://codeup.kr/showsource.php?id=24045288

#include <stdio.h>

int n;




long long int t = 0;

long long int f(x) {

	for (int i = 1; i < x+1; i++) {
		t = t + i;
	}
	return t;
}

int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
