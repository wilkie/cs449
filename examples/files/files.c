#include <stdio.h>
#include <string.h>

void main(void) {
  const char* path = "myfile.txt";
  const char* data = "hello!";
  char buffer[100] = {0};

  FILE* f = fopen(path, "w+");
  fwrite(data, strlen(data), 1, f);
  fclose(f);

  FILE* f2 = fopen(path, "r");
  fseek(f2, 0, SEEK_END);
  size_t filesize = ftell(f2);
  fseek(f2, 0, SEEK_SET);
  fread(buffer, filesize, 1, f2);
  buffer[filesize] = '\0';

  printf("The file says: %s\n", buffer);
}

