#include "stdio.h"
//clang -Xclang -ast-dump -fsyntax-only func01.c

long long a[5][7];

int main() {
  a[1][3] = 10;
  a[3][1] = 20;
  printf("%lld\n", a[1][3]);
  a[1][3];
  printf("%lld\n", 1[a][3]);
  1[a][3];
  printf("%lld\n", 3[1[a]]);
  3[1[a]];
  return 0;
}
