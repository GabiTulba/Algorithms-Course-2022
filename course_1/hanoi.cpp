#include <cstdio>

void hanoi(int n, char src, char dst, char aux) {
  if(n == 1) {
    printf("%c -> %c\n", src, dst);
    return;
  }

  hanoi(n - 1, src, aux, dst);
  printf("%c -> %c\n", src, dst);
  hanoi(n - 1, aux, dst, src);
}

int main () {
  int n;

  freopen("tests/hanoi.in", "r", stdin);
  freopen("tests/hanoi.out", "w", stdout);

  scanf("%d", &n);
  printf("%d\n", (1 << n) - 1);

  hanoi(n, 'A', 'C', 'B');

  return 0;
}
