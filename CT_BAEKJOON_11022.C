//https://www.acmicpc.net/problem/11022
//https://www.acmicpc.net/source/40093041

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A , B ,C,  total ,h, m;
	scanf("%d",&B);

	A = 0;
	C = 0;

	for (int i = 1; i < B + 1 ; i++) {
		scanf("%d %d", &A, &C);
		printf("Case #%d: %d + %d = %d\n", i, A , C , A + C);

	}

}	