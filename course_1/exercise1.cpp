#include <cstdio>

using namespace std;

int main() {
  int n, sum = 0;

  scanf("%d", &n);

  for(int i = 0; i < 2 * n; i++) { // N operatii
    for(int j = 0; j <= 2 * n; j++) { // N operatii
      sum += i * j;
    }
  } // O(N^2)

  printf("%d\n", sum);

  return 0;
}
