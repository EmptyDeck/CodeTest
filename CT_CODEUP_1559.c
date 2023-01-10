//https://codeup.kr/problem.php?id=1559
//https://codeup.kr/showsource.php?id=25437963

#include <stdio.h>

int n, m;

long long int f(x, y) {

	//(long long int)x;
	//(long long int)y;

	return(long long int)x + y;


}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}
