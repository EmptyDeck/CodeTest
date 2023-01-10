//https://www.acmicpc.net/problem/2562
//https://www.acmicpc.net/source/40239245

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A, i, n, B, ten, one, N, count,max ,min;
	A = 0;
	n = 0;
	B = 0;
	N = 0;
	count = 1;
	max = 0;
	min = 0;
	int arr[9] = {0};
	
	for (int i = 0; i < 9; i++) 
	{

		scanf("%d", &A);
		arr[i] = A;

		if (i == 0) {
			max = A;
		}
		if (A > max) {
			max = A;
		}
	}

	printf("%d\n" , max);
	for (int i = 0; i < 9; i++) {
		if (arr[i] != max) {
			count = count + 1;
		}
		else {
			break;
		}
	}
	printf("%d" , count);

}