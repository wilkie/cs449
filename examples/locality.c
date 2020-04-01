#include <stdlib.h>

#define LIMIT (2048 * 10)

int main() {
  int i, j;
  int* src[LIMIT];
  int* dst[LIMIT];

  for (i = 0; i < LIMIT; i++) {
    src[i] = malloc(sizeof(int) * LIMIT);
    dst[i] = malloc(sizeof(int) * LIMIT);
  }

  for (j = 0; j < LIMIT; j++) {
    for (i = 0; i < LIMIT; i++) {
      dst[i][j] = src[i][j];
    }
  }

  return 0;
}
