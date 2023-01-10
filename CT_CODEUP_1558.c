//https://codeup.kr/problem.php?id=1558
//https://codeup.kr/showsource.php?id=24237689

#include <stdio.h>

long long int n;

long long int f(long long int x) {

	long long int i = 0, ca = 0 , ba = 0,we = 1,ra=0;
	long long int arr[1000000] = { 0 };

	while (x % 10 != x) {
		arr[i] = x % 10;
		x = x / 10;
		i++;
		ca++;
	}
	arr[i] = x % 10;
	ca++;


	for (long long int i = ca-1; i+1 > 0; i--) {
		
		ba += arr[i] * we;
		ra++;
		we = 10 * we;
	}
	
	return ba;

}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}
