//https://www.acmicpc.net/problem/2439
//https://www.acmicpc.net/source/40176950

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A , i;
	A = 0;
	
	scanf("%d", &A);

	for (i = 0; i < A; i++)
	{	

		for (int b = 0; b < A - i - 1; b++)
		{
			printf(" ");
			
		}

		for (int a = 0; a < i+1; a++)
		{
			printf("*");
		}
		printf("\n");
	}
}