//https://codeup.kr/problem.php?id=1548
//https://codeup.kr/showsource.php?id=24043508

#include <stdio.h>

int n;



char grade(x)
{
    if (x >= 90) {
        return 'A';
    }
    else if (x >= 80) {
        return 'B';
    }
    else if (x >= 70) {
        return 'C';
    }
    else if (x >= 60) {
        return 'D';
    }
    else {
        return 'F';
    }
    
}
int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}
