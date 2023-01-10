//https://www.acmicpc.net/problem/10871
//https://www.acmicpc.net/source/40177256

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A , i, n , B;
	A = 0;
	n = 0;
	B = 0;
	
	scanf("%d %d", &n, &A);

	for (int i = 0; i < n; i++) {

		scanf("%d", &B);

		if (A > B) {
			printf("%d ", B);
		}


	}

}