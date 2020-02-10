#include <stdio.h>    /* printf, etc */
#include <limits.h>   /* INT_MIN, etc */

/* Returns the absolute value of the given integer. */
int abs(int x) {
  if (x < 0) {
    x = -x;
  }

  return x;
}

int main() {
  printf("|%d| = %d\n", -5, abs(-5));
  printf("|%d| = %d\n", INT_MIN, abs(INT_MIN));
}
