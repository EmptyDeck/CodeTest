//https://codeup.kr/problem.php?id=1551
//https://codeup.kr/showsource.php?id=24044898

#include <stdio.h>

int n, d[100010], k;




int cnt;
cnt = 0;
int f(x) {

    for (int i = 0; i < n; i++) {

        if (d[i] != x) {

            cnt++;

        }
        else {
            break;
        }
    }
    if (cnt == n) {
        return -1;
    }
    else {
        return cnt;

    }
    


}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);
  printf("%d\n", f(k));
}
