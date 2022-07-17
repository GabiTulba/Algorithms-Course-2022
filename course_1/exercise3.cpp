#include <cstdio>

using namespace std;

int main() {
  int n, m, sum = 0;

  scanf("%d %d", &n, &m);

  // Steps: n * log_2(m)
  // Complexity: O(n * log(m))
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j *= 2) {
      sum += j;
    }
  }

  printf("%d\n", sum);

  return 0;
}
