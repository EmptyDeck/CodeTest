//https://codeup.kr/problem.php?id=1094
//https://codeup.kr/showsource.php?id=24074256

#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c, n;

	scanf("%d", &n);

	int arr[10000] = { 0 };

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		arr[i] = a;
	}
	for (int i = n - 1; i > -1; i--) {
		printf("%d ", arr[i]);
	}

}
