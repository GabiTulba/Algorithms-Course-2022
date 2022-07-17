#include <algorithm>
#include <cstdio>

using namespace std;

int main () {
  int n, v[1001];

  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    scanf("%d", &v[i]);
  }

  //Sort Array
  for(int i = 1; i < n; i++) {
    for(int j = 1; j <= n - i; j++) {
      if(v[j] > v[j + 1]) {
        /* int t = v[j];
        * v[j] = v[j + 1];
        * v[j + 1] = t;
        */
        swap(v[j], v[j + 1]);
      }
    }
  }

  for(int i = 1; i <= n; i++) {
    printf("%d ", v[i]);
  }

  return 0;
}
