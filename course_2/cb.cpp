#include <cstdio>
#include <algorithm>

const int max_n = 200005;

int n, T, x, y;
int v[max_n];

using namespace std;

int lower_bound (int x) {
  int st = 1, dr = n, mid, last = 0;

  while(st <= dr) {
    mid = (st + dr) / 2;

    if(v[mid] <= x) {
      last = mid;
      st = mid + 1;
    } else {
      dr = mid - 1;
    }
  }

  return last;
}

int main () {
  scanf("%d %d", &n, &T);

  for(int i = 1; i <= n; i++) {
    scanf("%d", &v[i]);
  }

  sort(v + 1, v + n + 1);

  for(int i = 1; i <= T; i++) {
    scanf("%d %d", &x, &y);

    printf("%d\n", lower_bound(y) - lower_bound(x - 1));
  }

  return 0;
}
