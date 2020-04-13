#include <stdio.h>   // for printf
#include <string.h>  // for strlen
#include <fcntl.h>   // for open syscall
#include <unistd.h>  // for read/write syscalls

void main(void) {
  const char* path = "myfile.txt";
  const char* data = "hello!";
  char buffer[100] = {0};

  int fd = open(path, O_RDWR | O_CREAT | O_TRUNC);
  write(fd, data, strlen(data));
  close(fd);

  int fd2 = open(path, O_RDONLY);
  size_t filesize = lseek(fd2, 0, SEEK_END);
  lseek(fd2, 0, SEEK_SET);
  read(fd2, buffer, filesize);
  buffer[filesize] = '\0';
  close(fd2);

  printf("The file says: %s\n", buffer);
}

