//https://www.acmicpc.net/problem/10430
//https://www.acmicpc.net/source/40064206

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A , B , C;

	scanf("%d %d %d",&A,&B,&C);

	printf("%d\n%d\n%d\n%d\n" ,(A+B)%C,((A%C)+(B%C))% C,(A*B)%C,((A % C)*(B % C))%C);


}