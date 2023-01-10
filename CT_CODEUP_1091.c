//https://codeup.kr/problem.php?id=1091
//https://codeup.kr/showsource.php?id=24074033

#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{
	long long int h, b, c, s,MB;

	scanf("%lld %lld %lld %lld" ,&b, &c, &s ,&h);//b = start c = dung  s = n
	
	for (int i = 0; i < h-1; i++) {
		b = (b * c) + s;
	}

	printf("%lld", b);
}
