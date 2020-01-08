#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
  unsigned int x = UINT_MAX;
  int w = INT_MAX;
  double y = DBL_MAX;

  if (x + 1 > x) {
    printf("This does not happen.\n");
  }

  if (w + 1> w) {
    printf("This does happen.\n");
  }

  int z = w + 1;

  if (z > w) {
    printf("This does not happen.\n");
  }

  while (y == DBL_MAX) {
    y += 1.0;
  }

  printf("This also never happens.\n");

  return 0;
}
