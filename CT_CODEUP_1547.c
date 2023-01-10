//https://codeup.kr/problem.php?id=1547
//https://codeup.kr/showsource.php?id=24043420

#include <stdio.h>

int n;



#include <stdbool.h>
int u;
u = 0;
int n;
bool prime(x)
{

    for (int i = 2; i < x; i++) {

        if (x % i == 0) {
            u = u + 1;
        }
       
    }
    if (u == 0) {
        return true;
    }
    else {
        return false;
    }
}


int main()
{
  scanf("%d", &n);
  if(prime(n)) printf("prime");
  else printf("composite");
  return 0;
}
