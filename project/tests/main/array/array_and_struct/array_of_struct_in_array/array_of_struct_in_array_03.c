//clang -Xclang -ast-dump -fsyntax-only array_of_struct_03.c
//clang -O0 -Wall -masm=intel -S -fno-asynchronous-unwind-tables  -fcf-protection=none array_of_struct_03.c
//clang -emit-llvm -S -o array_of_struct_03.ll array_of_struct_03.c

#include <stdio.h>

struct Triangle { int side[3];} trian_array[5][3][2];
int i, j, k;
int main() {
  int count = 0;
  for(i = 0; i < 5; ++i) {
    for(j = 0; j < 3; ++j) {
      for(k = 0; k < 2; ++k) {
        trian_array[i][j][k].side[0] = 3 + i + j + k;
        trian_array[i][j][k].side[1] = 4 + i + j + k;
        trian_array[i][j][k].side[2] = 5 + i + j + k;
        printf("trian %d: perimeter = %d\n", ++count,
           trian_array[i][j][k].side[0]
           + trian_array[i][j][k].side[1]
           + trian_array[i][j][k].side[2]);
      }
    }
  }
  return 0;
}
