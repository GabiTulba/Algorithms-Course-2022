#include <cstdio>

const int max_n = 11;

int n;
int board[max_n][max_n];
int col[max_n] = {}, diag1[2 * max_n] = {}, diag2[2 * max_n] = {};

void print_board() {
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if(board[i][j] == 0) {
        printf("- ");
      } else {
        printf("* ");
      }
    }
    printf("\n");
  }
  printf("\n");
}

bool bkt(int lvl) {
  if(lvl == n + 1) {
    print_board();

    return true;
  }

  for(int i = 1; i <= n; i++) {
    if(col[i] == 0 && diag1[lvl + i - 1] == 0 && diag2[lvl - i + n] == 0) {
      board[lvl][i] = 1;
      col[i] = 1;
      diag1[lvl + i - 1] = 1;
      diag2[lvl - i + n] = 1;

      if(bkt(lvl + 1)) {
        return true;
      }

      board[lvl][i] = 0;
      col[i] = 0;
      diag1[lvl + i - 1] = 0;
      diag2[lvl - i + n] = 0;
    }
  }

  return false;
}

int main () {

  scanf("%d", &n);

  bkt(1);

  return 0;
}
