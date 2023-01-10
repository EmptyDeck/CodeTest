//https://www.acmicpc.net/problem/3052
//https://www.acmicpc.net/source/40248075

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A, i, C, B, ten, one, N, count,max ,min,ram;
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

	int arr[10] = {0};
	int brr[10] = { 0 };

	for (int i = 0; i < 10  ; i++) 
	{

		scanf("%d", &arr[i]);
		//printf("%d\n", A);
		//printf("%d\n", arr[i]);
	}
	/*
	for (int i = 0; i < count-1; i++) {

		printf("%d\n", arr[i]);

	}
	*/
	for (int i = 0; i < 10; i++) {
		
		brr[i] = arr[i] % 42;

	}
	
	for (int n = 0; n < 10; n++) {
		for (int i = 0; i < 9;) {
			if (brr[i] > brr[i + 1]) {
				ram = brr[i];
				brr[i] = brr[i + 1];
				brr[i + 1] = ram;
			}
			i++;
		}
		i = 0;
	}/*
	for (int i = 0; i < 10; i++) {

		printf("%d\n", brr[i]);
	}*/
	for (int i = 0; i < 9; i++) {
		if (brr[i] != brr[i + 1]) {

			count++;
		}

	}
	printf("%d", count);
}