//https://codeup.kr/problem.php?id=1085
//https://codeup.kr/showsource.php?id=24073766

#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{
	float h, b, c, s,MB;

	scanf("%f %f %f %f", &h, &b, &c, &s);
	MB = (h * b * c * s / 8) / 1024 / 1024;
	printf("%.1f MB", MB);
}
