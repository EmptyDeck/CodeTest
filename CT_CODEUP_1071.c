//https://codeup.kr/problem.php?id=1071
//https://codeup.kr/showsource.php?id=24072798

#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{
	int a;
	reset:
	scanf("%d", &a);
	if (a != 0)
		printf("%d\n", a);
	else
		goto end;
	goto reset;

	end:
		return 0;

}
