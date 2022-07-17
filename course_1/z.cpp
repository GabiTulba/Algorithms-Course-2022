#include <cstdio>

int find_val(int x, int y, int N) {
  if(N == 1) {
    return 1;
  }

  if(x <= N/2) {
    if(y <= N/2) {
      return find_val(x, y, N / 2);
    } else {
      return N * N / 4 + find_val(x, y - N / 2, N / 2);
    }
  } else {
    if(y <= N/2) {
      return N * N / 2 + find_val(x - N / 2, y, N / 2);
    } else {
      return N * N / 4 * 3 + find_val(x - N / 2, y - N / 2, N / 2);
    }
  }
}

int main() {
  freopen("tests/z.in", "r", stdin);
  freopen("tests/z.out", "w", stdout);

  int n, k, x, y;

  scanf("%d %d", &n, &k);

  for(int i = 1; i <= k; i++) {
    scanf("%d %d", &x, &y);

    printf("%d\n", find_val(x, y, 1 << n));
  }

  return 0;
}
