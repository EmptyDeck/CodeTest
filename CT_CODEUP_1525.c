//https://codeup.kr/problem.php?id=1525
//https://codeup.kr/showsource.php?id=25524078

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int value[10000];
int a, b, c, d, e, ram = 0, global_count = 0;

int main(void)
{
	int i = 0, s = 0, g = 0, bomb = 0, cnt = 0;
	int arr[10][10];
	int car[10][10];
	int bob[10][10];

	for (int j = 0; j < 10; j++) {//make it all zero
		for (int k = 0; k < 10; k++) {
			arr[j][k] = 0;
		}
	}
	for (int j = 0; j < 10; j++) {//make it all zero bob
		for (int k = 0; k < 10; k++) {
			bob[j][k] = 0;
		}
	}
	for (int j = 0; j < 10; j++) {//make it all zero car
		for (int k = 0; k < 10; k++) {
			car[j][k] = 0;
		}
	}
	for (int j = 0; j < 10; j++) {//print map
		for (int k = 0; k < 10; k++) {
			scanf("%d ", &arr[j][k]);
		}
	}

	scanf("%d", &c);//char mou



	for (int h = 0; h < c; h++) {//mark char
		scanf("%d %d", &a, &b);
		car[a - 1][b - 1] = h+1;
	}
	for (int j = 0; j < 10; j++) {//bomb blast
		for (int k = 0; k < 10; k++) {
			if (arr[j][k] > 0) {
				bob[j][k] = arr[j][k];
			}


		}
	}
	for (int j = 0; j < 10; j++) {//bomb blast
		for (int k = 0; k < 10; k++) {
			if (j == 6 && k == 2) {
				printf("");
			}
			if (bob[j][k] > 0) {//if there is a bomb

				//printf("in of k is %d\n", k);
				bomb = bob[j][k];
				s = j;
				g = k;
				cnt = 0;
				for (; arr[s][g] != -1 && g < 10 && cnt < bomb + 1; g++) {
					arr[s][g] = -2;	
					cnt++;
					//printf("arr[%d][%d] in for s is %d\n", s, g, s);
					//printf("bomb location arr(%d %d)\nspread to arr(%d %d) going down\n",j,k,s,g);
				}
				s = j;
				g = k;
				cnt = 0;
				for (; arr[s][g] != -1 && g >= 0 && cnt < bomb + 1; g--) {
					arr[s][g] = -2;
					cnt++;
					//printf("arr[%d][%d] in for s is %d\n", s, g, s);
					//printf("bomb location arr(%d %d)\nspread to arr(%d %d) going up\n", j, k, s, g);
				}
				s = j;
				g = k;
				cnt = 0;
				for (; arr[s][g] != -1 && s < 10 && cnt < bomb + 1; s++) {
					arr[s][g] = -2;
					cnt++;
					//printf("arr[%d][%d] in for s is %d\n", s, g, s);
					//printf("bomb location arr(%d %d)\nspread to arr(%d %d) going right\n", j, k, s, g);
				}
				s = j;
				g = k;
				cnt = 0;
				for (; arr[s][g] != -1 && s >=0 && cnt < bomb + 1; s--) {
					arr[s][g] = -2;
					cnt++;
					//printf("arr[%d][%d] in for s is %d\n", s, g, s);
					//printf("bomb location arr(%d %d)\nspread to arr(%d %d) going left\n", j, k, s, g);
				}
			} 

		}
	}

	for (int j = 0; j < 10; j++) {
		for (int k = 0; k < 10; k++) {
			if (arr[j][k] == 0 && car[j][k] > 0) {
				arr[j][k] = car[j][k];
			}
		}

	}

	


	
	for (int j = 0; j < 10; j++) {
		for (int k = 0; k < 10; k++) {
			printf("%d ", arr[j][k]);
		}
		printf("\n");
	}

	printf("Character Information\n");
	for (int l = 0; l < c; l++) {
		cnt = 0;
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				if (arr[j][k] == l + 1) {
					printf("player %d survive\n", l + 1);
					cnt++;
				}
			}
		}
		if (cnt == 0) {
			printf("player %d dead\n", l + 1);
		}
	}


}

