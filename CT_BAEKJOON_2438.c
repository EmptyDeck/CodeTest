//https://www.acmicpc.net/problem/2438
//https://www.acmicpc.net/source/40101076

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A , B ,C,  total ,h, m;
	scanf("%d",&B);

	A = 0;
	C = 0;

	for (int i = 1; i < B + 1 ; i++) {


		for (int z = 0; z < i; z++) {

			printf("*");

		}

		printf("\n");
	}

}	