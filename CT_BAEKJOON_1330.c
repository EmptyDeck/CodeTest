//https://www.acmicpc.net/problem/1330
//https://www.acmicpc.net/source/40065796

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A , B , fir ,sec, th;
	scanf("%d %d", &A, &B);
	if (A > B) {
		printf(">");
	}
	else if (A < B) {
		printf("<");
	}
	else {
		printf("==");
	}
}	