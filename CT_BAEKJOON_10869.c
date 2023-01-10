//https://www.acmicpc.net/problem/10869
//https://www.acmicpc.net/source/40052152

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b;
	a = 0;
	b = 0;
	scanf("%d %d", &a, &b);

	printf("%d\n%d\n%d\n%d\n%d\n",a+b,a-b,a*b,a/b ,a % b);


}