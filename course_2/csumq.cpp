#include <cstdio>

const int max_n = 100005;

int n, q, x, y;
int s[max_n];

int main () {
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%d", &x);

    if(i > 0) s[i] = s[i - 1] + x;
    else s[i] = x;
  }

  scanf("%d", &q);

  for(int i = 0; i < q; i++) {
    scanf("%d %d", &x, &y);
    printf("%d\n", s[y] - s[x - 1]);
  }

  return 0;
}
