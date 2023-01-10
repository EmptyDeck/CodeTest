//https://codeup.kr/problem.php?id=4012
//https://codeup.kr/showsource.php?id=26751659

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct tot {
	int point;
	int rank;
}t;

int main(void)
{

	

	t brr[200];
	t ram;
	int rem[200];
	int a, b, c;
	int list[200];
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%d", &brr[i].point);
		rem[i] = brr[i].point;
	}
	
	for (int k = 0; k < a; k++) {
		for (int j = 0; j < a - 1; j++) {
			if (brr[j].point < brr[j + 1].point) {
				ram = brr[j];
				brr[j] = brr[j + 1];
				brr[j + 1] = ram;
			}
		}
	}
	
	int rank = 1;
	brr[0].rank = rank;
	int flag = 0;
	for (int i = 0; i < a; i++) {

		if (brr[i].point == brr[i + 1].point) {
			brr[i].rank = rank;
			brr[i + 1].rank = rank;
			flag = 1;
		}
		else {
			if (flag == 1) {
				brr[i].rank = rank;
				flag = 0;
			}
			else {
				brr[i].rank = i + 1;
			}
			
			
		}
		rank++;
	}
	
	
	for (int k = 0; k < a; k++) {
		for (int j = 0; j < a; j++) {
			if (rem[k] == brr[j].point) {
				printf("%d %d\n", brr[j].point, brr[j].rank);
				break;
			}
			
		}
	}

}

