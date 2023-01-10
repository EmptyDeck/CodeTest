//https://www.acmicpc.net/problem/10818
//https://www.acmicpc.net/source/40183140

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A, i, n, B, ten, one, N, count,max ,min;
	A = 0;
	n = 0;
	B = 0;
	N = 0;
	count = 0;
	max = 0;
	min = 0;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &A);
		if (i == 0) {
			max = A;
			min = A;
		}
		if (A > max) {
			max = A;
		}
		if (A < min) {
			min = A;
		}
	}





	printf("%d %d", min, max);
}