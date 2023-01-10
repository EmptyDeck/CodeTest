//https://codeup.kr/problem.php?id=1045
//https://codeup.kr/showsource.php?id=24072573

#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{
	float A, B , sum;
	scanf("%f %f", &A, &B);
	sum = A + B;
	printf("%.0f\n", sum);
	sum = A - B;
	printf("%.0f\n", sum);
	sum = A * B;
	printf("%.0f\n", sum);
	sum = A / B;
	printf("%.0f\n", sum);
	sum = fmod(A, B);
	printf("%.0f\n", sum);
	sum = A / B;
	printf("%.2f\n", sum);

}
