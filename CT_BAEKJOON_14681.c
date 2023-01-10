//https://www.acmicpc.net/problem/14681
//https://www.acmicpc.net/source/40066916

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A , B , fir ,sec, th;
	scanf("%d %d", &A , &B);
	if (A > 0){

		if (B >0) {
			printf("1");
		}
		else {
			printf("4");
		}

	}
	else {
		if (B > 0) {
			printf("2");
		}
		else {
			printf("3");
		}
	}
}	