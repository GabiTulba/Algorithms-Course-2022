#include <cstdio>
#include <climits>

const int max_n = 600005;
const int inf = INT_MAX; // 32 biti - 1 bit pt semn, 31 pt valoare, [-2^31, 2^31 - 1]

int n, v[max_n];
int sum_max = -inf, st, dr;

void find_ssm(int *v, int s, int e) {
  if(s == e) {
    if(sum_max < v[s]) {
      sum_max = v[s];
      st = s;
      dr = s;
    }
    return;
  }

  int mid = (s + e) / 2;

  find_ssm(v, s, mid);

  int sum_st = -inf, best_st = -1;
  int sum_dr = -inf, best_dr = -1;
  int sum = 0;

  for(int i = mid; i >= s; i--) {
    sum += v[i];
    if(sum >= sum_st) {
      sum_st = sum;
      best_st = i;
    }
  }

  sum = 0;
  for(int i = mid + 1; i <= e; i++) {
    sum += v[i];
    if(sum > sum_dr) {
      sum_dr = sum;
      best_dr = i;
    }
  }

  if(sum_st + sum_dr > sum_max) {
    sum_max = sum_st + sum_dr;
    st = best_st;
    dr = best_dr;
  }

  find_ssm(v, mid + 1, e);
}

int main() {
  freopen("tests/ssm.in", "r", stdin);
  freopen("tests/ssm.out", "w", stdout);

  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    scanf("%d ", &v[i]);
  }

  find_ssm(v, 1, n);

  printf("%d %d %d\n", sum_max, st, dr);

  return 0;
}
