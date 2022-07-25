#include <cstdio>

const int max_n = 200005;

int n, m, x, st, dr;
int d[max_n], v[max_n];

int main () {
  scanf("%d %d", &n, &m);

  for(int i = 1; i <= m; i++) {
    scanf("%d %d %d", &st, &dr, &x);
    d[st] += x;
    d[dr + 1] -= x;
  }

  for(int i = 1; i <= n; i++) {
    v[i] = v[i - 1] + d[i];
    printf("%d ", v[i]);
  }

  return 0;
}
