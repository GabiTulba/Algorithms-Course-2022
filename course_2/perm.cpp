#include <cstdio>

using namespace std;

const int max_n = 10;

int n;
int v[max_n], p[max_n];


void bkt(int lvl) {
  if(lvl == n) { // caz final
    for(int i = 1; i <= n; i++) {
      printf("%d ", p[i]);
    }
    printf("\n");
    return;
  }

  for(int i = 1; i <= n; i++) { // ramificatia
    if(v[i] == 1) {
      // modificam starea
      v[i] = 0;
      p[lvl + 1] = i;

      // apelam bkt pentru nivelul urmator
      bkt(lvl + 1);

      // readucem starea la forma anterioara
      v[i] = 1;
      p[lvl + 1] = 0;
    }
  }
}

int main () {
  freopen("tests/permutari.in", "r", stdin);
  freopen("tests/permutari.out", "w", stdout);


  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    v[i] = 1;
  }

  bkt(0);

  return 0;
}
