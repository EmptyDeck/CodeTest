//https://codeup.kr/problem.php?id=1546
//https://codeup.kr/showsource.php?id=24043311

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
bool plus(x)
{

    if (x > 0) {
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
  else printf("%s", plus(n)?"plus":"minus");
  return 0;
}
