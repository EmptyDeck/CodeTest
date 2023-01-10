//https://codeup.kr/problem.php?id=1545
//https://codeup.kr/showsource.php?id=24043275

#include <stdio.h>

int n;



#include <stdbool.h>

bool zero(x)
{

    if (x == 0) {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("non zero");
  return 0;
}
