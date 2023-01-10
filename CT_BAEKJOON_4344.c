//https://www.acmicpc.net/problem/4344
//https://www.acmicpc.net/source/40327251

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	float A, i, C, one, count,max ,min,ram , total , avr;
	float N, B;
	A = 0;
	B = 0;
	C = 0;
	N = 0;
	count = 0;
	max = 0;
	min = 0;
	one = 0;
	i = 0;
	ram = 0;
	total = 0;
	avr = 0;

	scanf("%f", &A);//몇수업?

	for (int i = 0; i < A; i++) {
		float arr[1000] = { 0 };
		scanf("%f",&B);//몇명?

		for (int i = 0; i < B; i++) {

			scanf("%f", &C);//몇점?
			arr[i] = C;
			count++;
		}

		//평균 구하기

		for (int i = 0; i < B; i++) {
			total = total + arr[i];//총
		}

		avr = total / B;//평균
		//printf(" avr is %f \n", avr);
		for (int i = 0; i < B; i++) {

			if (avr < arr[i]) {//평균 이상 몇 엔
				N = N + 1;
			}

		}
		//printf("%f\n", N);
		//printf("%f\n", B);
		printf("%.3f%%\n", (N/B)*100);
		N = 0;
		B = 0;
		total = 0;
	}

}