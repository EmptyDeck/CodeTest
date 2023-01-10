//https://www.acmicpc.net/problem/8393
//https://www.acmicpc.net/source/40080458

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A , B ,C,  total ,h, m;
	scanf("%d",&B);
	A = 0;
	for (int i = 1; i < B+1 ; i++) {

		A = A + i;

	}
	printf("%d", A);
}	