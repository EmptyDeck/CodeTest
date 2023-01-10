//https://www.acmicpc.net/problem/2884
//https://www.acmicpc.net/source/40075111

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A , B , total ,h, m;
	scanf("%d %d", &A , &B);

	total = A * 60 + B - 45 + 1440;

	h = total / 60;
	m = total % 60;
	h = h % 24;
	
	printf("%d %d", h, m);

}	