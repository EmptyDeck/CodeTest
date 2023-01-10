//https://codeup.kr/problem.php?id=1095
//https://codeup.kr/showsource.php?id=25512361

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int value[10000];
int a, b, c, d, e, ram = 0, global_count = 0;

int main(void)
{
	int i = 0;
	int arr[10000];
	int min;

	scanf("%d", &a);

	while (i < a) {
		scanf("%d", &b);
		arr[i] = b;
		i++;
	}
	min = arr[0];

	for (int k = 0; k < i; k++) {
		for (int j = 0; j < i; j++) {
			if (arr[j] < min) {
				min = arr[j];
				//printf("in if / arr[%d] min is now %d\n", i, min);
			}
		}
	}
	printf("%d", min);
}










;
/*
int min=0,key,ram;
int value[5] = {16,7,9,1,3};

int i;



for (int k = 0; k < SIZE; k++) {
	for (int i = 0; i < SIZE-1; i++) {

		if (value[i + 1] < value[i]) {
			ram = value[i + 1];
			value[i + 1] = value[i];
			value[i] = ram;
		}
	}
}
for (int i = 0; i < SIZE; i++) {
	printf("%d\n", value[i]);
}

*/
/*
int i, k;
int list[SIZE] = { 100, 30, 20, 78, 89, 12, 56, 38, 99, 66 };

HDC hdc = GetWindowDC(GetForegroundWindow());

for (k = 0; k < SIZE; k++) {

	Rectangle(hdc, 0, 0, 800, 800);

	for (i = 0; i < SIZE - 1; i++) {
		if (list[i] > list[i + 1]) {
			int tmp = list[i];
			list[i] = list[i + 1];
			list[i + 1] = tmp;
		}
	}

	for (i = 0; i < SIZE; i++) {
		Rectangle(hdc, 200 + i * 30, 200, 230 + i * 30, 200 - list[i]);
	}
	Sleep(1000);


}
*/
/*
HDC hdc = GetWindowDC(GetForegroundWindow());

int x = 30, y = 200;
int vx = 50, vy = -50;

int i;

MoveToEx(hdc, 30, 200, NULL);
LineTo(hdc, 800, 200);

for (i = 0; i < 20; i++) {

	y = vy + 10;
	x = x + vx;
	Ellipse(hdc, x, y, x + 10, y + 10);
	Sleep(100);

}
*/
/*
int i, j,sum=0,cat=0,qt;
int a[x][y] = {
{ 70, 81, 52, 63, 94 }, // 첫번째 행의 원소들의 초기값
{ 90, 61, 32, 83, 74 }, // 두번째 행의 원소들의 초기값
{ 80, 51, 52, 73, 74 }, };

for (i = 0; i < x; i++) {
	cat = 0;
	for (j = 0; j < y; j++) {

		cat = cat + a[i][j];
		printf("a[%d][%d] = %d\n", i, j, a[i][j]);
	}

	printf("\n\n @ class %d avr is %d @\n\n", i+1 , cat/j);

	}
printf("\ntotal avr is %d ", sum / (i + j));
*/

