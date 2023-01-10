//https://www.acmicpc.net/problem/8958
//https://www.acmicpc.net/source/40298912

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A, i, C, B, one, N, count,max ,min,ram;

	A = 0;
	B = 0;
	C = 0;
	N = 0;
	count = 0;
	max = 0;
	min = 0;
	one = 0;
	i = 0;
	ram = 0;



	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		char txt[80] = "";
		scanf("%s", txt);

		for (int i = 0; i < 80; i++) {
			
			if (txt[i] == 'O') {
				count = count + 1;
				//printf("%c is right ! \n" , txt[i]);
			}
			else {
				count = 0;
				//printf("wrong!\n");
			}
			ram = ram + count;
			//printf("ram is %d\n", ram);
		}
		printf("%d\n", ram);
		ram = 0;
		count = 0;
	}
}