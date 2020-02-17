/*
 * Compiled as:
 *
 * gcc -o puzzle puzzle.c
 *
 */

#include <stdio.h>
#include <string.h>

char str[100] = {0};

/**
 * Removes the last character of the given string.
 */
void chomp(char* str) {
  str[strlen(str) - 1] = '\0';
}

int main(void) {
  printf("Enter in the password: ");
  fgets(str, 100, stdin);
  chomp(str);

  char* ptr = str;

  while(*ptr) {
    *ptr = *ptr + 1;
    ptr++;
  }

  if (!strcmp("bcdefg", str)) {
    printf("ACCESS GRANTED\n");
  }
  else {
    printf("ACCESS DENIED!!\n");
  }

  return 0;
}
