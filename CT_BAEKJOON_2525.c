//https://www.acmicpc.net/problem/2525
//https://www.acmicpc.net/source/40076059

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A , B ,C,  total ,h, m;
	scanf("%d %d\n%d", &A , &B , &C);

	total = A * 60 + B + C;

	h = total / 60;
	m = total % 60;
	h = h % 24;
	
	printf("%d %d", h, m);

}	