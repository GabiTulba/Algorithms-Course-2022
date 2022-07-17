#include <cstdio>

const int inf = 2000000000; // 32 biti - 1 bit pt semn, 31 pt valoare, [-2^31, 2^31 - 1]

int n;
int sum_max = -inf, st, dr, sum_min, pos_min, sum, x;

int main() {
  freopen("tests/ssm.in", "r", stdin);
  freopen("tests/ssm.out", "w", stdout);

  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    scanf("%d", &x);
    sum += x;

    if(sum - sum_min > sum_max) {
      sum_max = sum - sum_min;
      st = pos_min + 1;
      dr = i;
    }

    if(sum < sum_min) {
      sum_min = sum;
      pos_min = i;
    }
  }

  printf("%d %d %d\n", sum_max, st, dr);

  return 0;
}
