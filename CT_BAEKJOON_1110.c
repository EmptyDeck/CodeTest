//https://www.acmicpc.net/problem/1110
//https://www.acmicpc.net/source/40178828


#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A , i, n , B,ten,one , N,count;
	A = -76876;
	n = 0;
	B = -864315768;
	N = 0;
	count = 0;
	scanf("%d", &A);

	while (B != A) {

		if (count == 0) {
			B = A;
		}
		ten = A / 10;
		one = A % 10;
		n = ten + one;
		N = one * 10 + n % 10;
		A = N;
		count++;
	}

	printf("%d", count);
}