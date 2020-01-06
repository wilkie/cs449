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

  for (i = 0; i < LIMIT; i++) {
    for (j = 0; j < LIMIT; j++) {
      dst[j][i] = src[j][i];
    }
  }

  return 0;
}
