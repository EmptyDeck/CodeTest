//https://codeup.kr/problem.php?id=1556
//https://codeup.kr/showsource.php?id=25438536

#include <stdio.h>

int n;





int f(x) {
	int q = x;
	x = 1;

	for (int i = 1; i < q+1; i++) {

		x = x * i;

	}
	return x;
}
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
