//https://www.acmicpc.net/problem/2480
//https://www.acmicpc.net/source/39972821

#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a, b, c , h , m;
	a = 0;
	b = 0;
	c = 0;
	h = 0;
	m = 0;
	scanf("%d %d %d", &a,&b,&c);

	if (a == b) {
		if (b == c) {
			a = 10000 + a * 1000;
			printf("%d", a);
		}
		else {
			a = 1000 + a * 100;
			printf("%d", a);
		}
	}
	else if (a == c) {
		a = 1000 + a * 100;
		printf("%d", a);
	}
	else if (b == c) {
		b = 1000 + b * 100;
		printf("%d", b);
	}
	else {
		if (a > b) {
			if (a > c) {
				a = a * 100;
				printf("%d", a);
			}
			else {
				c = c * 100;
				printf("%d", c);
			}
		}
		else if (c > b) {
			c = c * 100;
			printf("%d", c);
		}
		else {
			b = b * 100;
			printf("%d", b);
		}
	}
	

}