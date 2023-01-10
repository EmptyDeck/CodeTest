//https://codeup.kr/problem.php?id=1019&rid=0
//https://codeup.kr/showsource.php?id=24072267
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

    int y = 0, m = 0, d = 0;

    scanf("%d.%d.%d", &y, &m, &d);

    printf("%04d.%02d.%02d", y , m , d);

}
