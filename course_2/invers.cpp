#include <cstdio>
#include <cmath>

const double eps = 1e-8; // 0.00000001

double f(double x) {
  return sin(x) + sin(2 * x) + x;
}

// segments : 1/eps = eps^-1
// Time complexity: O(log(eps^-1))
double find_root(double a) {
  double st = 0, dr = 1, mid;

  while(dr - st >= eps) {
    mid = (st + dr) / 2;
    if(f(mid) >= a) {
      dr = mid - eps;
    } else {
      st = mid + eps;
    }
  }

  return st;
}

int main() {
  double a;

  scanf("%lf", &a);

  printf("%.8lf\n", find_root(a));

  return 0;
}
