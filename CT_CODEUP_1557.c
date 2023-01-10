//https://codeup.kr/problem.php?id=1557
//https://codeup.kr/showsource.php?id=25438855

#include <stdio.h>

int n;





int f(x) {

	int a, b=0, c;

	for (int i = 1; i < x+1; i++) {

		if (x % i == 0) {
			b++;
		}



	}
	return b;
}
int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}
