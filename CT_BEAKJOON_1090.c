//https://codeup.kr/problem.php?id=1090
//https://codeup.kr/showsource.php?id=24073901

#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{
	long long int h, b, c, s,MB;

	scanf("%lld %lld %lld" ,&b, &c, &s);//b = start c = dung  s = n
	
	for (int i = 0; i < s-1; i++) {
		b = b * c;
	}

	printf("%lld", b);
}
