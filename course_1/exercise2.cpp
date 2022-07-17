#include <cstdio>

using namespace std;

int main() {
  int n, m, sum = 0;

  scanf("%d %d", &n, &m);

  // Steps: 2n * m/3
  // O(n*m)
  for(int i = 1; i <= 2 * n; i++) {
    for(int j = 1; j <= m; j += 3) {
      sum += i * j;
    }
  }

  printf("%d\n", sum);

  return 0;
}
