//https://www.acmicpc.net/problem/2577
//https://www.acmicpc.net/source/40247124


#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A, i, C, B, ten, one, N, count,max ,min;
	A = 0;
	B = 0;
	C = 0;
	N = 0;
	count = 0;
	max = 0;
	min = 0;
	one = 0;
	i = 0;

	int arr[1000] = {0};
	
	scanf("%d %d %d" ,&A ,&B ,&C);

	N = A * B * C;

	for (int i = 0; B != N  ; i++) {
		B = N;
		arr[i] = N % 10;
		N = N / 10;
		count = count + 1;
		
	}
	/*
	for (int i = 0; i < count-1; i++) {

		printf("%d\n", arr[i]);

	}
	*/

	for (int i = 0; i < 10;) {
		
		for (int n = 0; n < count-1; n++) {
			if (arr[n] == i) {
				one = one + 1;
				
			}

		}
		printf("%d\n", one);
		one = 0;
		i++;
	}
}