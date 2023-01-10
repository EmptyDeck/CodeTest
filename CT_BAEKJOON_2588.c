//https://www.acmicpc.net/problem/2588
//https://www.acmicpc.net/source/40064569

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A , B , fir ,sec, th;

	scanf("%d %d",&A,&B);
	sec = B;
	for (int i = 0; i < 3; i++) {

		fir = A * (B % 10);
		B = B / 10;
		printf("%d\n", fir);

	}

	
	printf("%d", A * sec);

}