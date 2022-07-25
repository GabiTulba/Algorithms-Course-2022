#include <cstdio>

const int max_n = 25005;

int n, m, x;
int v[max_n];

// Time complexity: O(n)
int bad_search (int x) {
  for(int i = 1; i <= n; i++) {
    if(x == v[i]) {
      return 1;
    }
  }

  return 0;
}

// Time complexity: O(log(n))
int binsearch(int x) {
  int st = 1, dr = n, mid;
  while(st <= dr) {
    mid = (st + dr) / 2;
    if(v[mid] == x) {
      return 1;
    } else if(v[mid] < x) {
      st = mid + 1;
    } else {
      dr = mid - 1;
    }
  }

  return 0;
}

int main () {
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    scanf("%d", &v[i]);
  }

  scanf("%d", &m);

  for(int i = 1; i <= m; i++) {
    scanf("%d", &x);

    printf("%d ", binsearch(x));
  }

  return 0;
}
