//https://www.acmicpc.net/problem/10952
//https://www.acmicpc.net/source/40177745

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A , i, n , B;
	A = -7684351876;
	n = 0;
	B = -864315768;
	
	while (A != 0 && B != 0){	
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0) {
			break;
		}
		
		printf("%d\n", A + B);

	}

}