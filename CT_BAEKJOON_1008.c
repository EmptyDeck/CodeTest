//https://www.acmicpc.net/problem/1008
//https://www.acmicpc.net/source/40052066


#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	long double a, b;
	a = 0;
	b = 0;
	scanf("%Lf %Lf", &a, &b);

	printf("%.10Lf", a / b);

}