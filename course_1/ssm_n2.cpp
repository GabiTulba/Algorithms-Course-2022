#include <cstdio>

const int max_n = 600005;
const int inf = 2000000000; // 32 biti - 1 bit pt semn, 31 pt valoare, [-2^31, 2^31 - 1]

int n, v[max_n];
int sum_max = -inf, st, dr;

int main() {
  freopen("tests/ssm.in", "r", stdin);
  freopen("tests/ssm.out", "w", stdout);

  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    scanf("%d ", &v[i]);
  }

  for(int i = 1; i <= n; i++) {
    int sum = 0;
    for(int j = i; j <= n; j++) {
      sum += v[j];

      if(sum_max < sum) {
        sum_max = sum;
        st = i;
        dr = j;
      }
    }
  }

  printf("%d %d %d\n", sum_max, st, dr);

  return 0;
}
