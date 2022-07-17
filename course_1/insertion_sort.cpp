
#include <algorithm>
#include <cstdio>

using namespace std;

int main () {
  int n, v[10001];

  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    scanf("%d", &v[i]);
  }

  //Sort Array
  for(int i = 2; i <= n; i++) {
    for(int j = i - 1; j >= 1; j--) {
      if(v[j] > v[j + 1]) {
        swap(v[j], v[j + 1]);
      } else {
        break;
      }
    }
  }

  for(int i = 1; i <= n; i++) {
    printf("%d ", v[i]);
  }

  return 0;
}
