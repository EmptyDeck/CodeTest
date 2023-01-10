//https://codeup.kr/problem.php?id=1096
//https://codeup.kr/showsource.php?id=25513379

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int value[10000];
int a, b, c, d, e, ram = 0, global_count = 0;

int main(void)
{
	int i = 0;
	int arr[20][20];

	for (int j = 0; j < 20; j++) {
		for (int k = 0; k < 20; k++) {
			arr[j][k] = 0;
		}
	}

	scanf("%d", &c);

	for (int h = 0; h < c; h++) {
		scanf("%d %d", &a, &b);
		arr[a - 1][b - 1] = 1;
	}
	
	for (int j = 0; j < 19; j++) {
		for (int k = 0; k < 19; k++) {
			printf("%d ", arr[j][k]);
		}
		printf("\n");
	}


}


