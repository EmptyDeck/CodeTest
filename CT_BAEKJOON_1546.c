//https://www.acmicpc.net/problem/1546
//https://www.acmicpc.net/source/40269071


#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	float A, i, C, B, ten, one, N, count,max ,min,ram;
	A = 0;
	B = 0;
	C = 0;
	N = 0;
	count = 1;
	max = 0;
	min = 0;
	one = 0;
	i = 0;
	ram = 0;

	int arr[1000] = {0};
	int brr[10] = { 0 };


	scanf("%f", &N);

	for (int i = 0; i < N; i++) {

		scanf("%f", &A);

		arr[i] = A;
			
		if (i == 0) {
			max = A;
		}
		if (A > max) {
			max = A;
		}
	}



	for (int i = 0; i < N; i++) {

		ram = ram + (arr[i] * 100) / max / N;


	}
	printf("%f", ram);
}