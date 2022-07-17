#include <cstdio>
#include <algorithm>

using namespace std;

const int max_n = 100001;
int aux[100001];

void merge(int *v, int s, int mid, int e) {
  int i = s, j = mid + 1, k = s;

  while(i <= mid && j <= e) {
    if(v[i] <= v[j]) {
      aux[k++] = v[i++];
    } else {
      aux[k++] = v[j++];
    }
  }

  while(i <= mid) {
    aux[k++] = v[i++];
  }

  while(j <= e) {
    aux[k++] = v[j++];
  }

  for(int i = s; i <= e; i++) {
    v[i] = aux[i];
  }
}

void merge_sort(int *v, int s, int e) {
  if(s == e) {
    return;
  }

  int mid = (s + e) / 2;

  merge_sort(v, s, mid);
  merge_sort(v, mid + 1, e);

  merge(v, s, mid, e);
}

int main() {
  int n, v[max_n];

  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    scanf("%d", &v[i]);
  }

  merge_sort(v, 1, n);

  for(int i = 1; i <= n; i++) {
    printf("%d ", v[i]);
  }

  printf("\n");

  return 0;
}
