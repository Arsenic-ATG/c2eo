#include <stdio.h>
int
test()
{
	int x[2];
	int *p;
	
	x[1] = 7;
	p = &x[0];
	p = p + 1;
	
	if(*p != 7)
		return 1;
	if(&x[1] - &x[0] != 1)
		return 1;
	
	return 0;
}
int main () {
  int x;
  x = test();
  printf("%d\n", x);
  x;
  return 0;
}