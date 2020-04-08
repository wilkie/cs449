#include <stdio.h>      // fgets, etc
#include <sys/socket.h> // socket API
#include <arpa/inet.h>  // inet functions
#include <unistd.h>     // read/close system calls
#include <string.h>     // strlen
#define PORT 9997

int main(void) {
  int sock = socket(AF_INET, SOCK_STREAM, 0);
  if (sock < 0) {
    printf("\n Socket creation error \n");
    return -1;
  }

  struct sockaddr_in serv_addr;
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_port = htons(PORT);

  // Convert IPv4 and IPv6 addresses from text to binary form
  if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0) {
    printf("\nInvalid address/ Address not supported \n");
    return -1;
  }

  int result = connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
  if (result < 0) {
    printf("\nConnection Failed \n");
    return -1;
  }

  char buffer[1024] = {0};
  int count = 0;
  do {
    if (fgets(buffer, 1024, stdin) == NULL) {
      break; // Exit when line is empty (CTRL+D is pressed)
    }
    write(sock, buffer, strlen(buffer));
    count = read(sock, buffer, 1023);
    buffer[count] = '\0';
    fputs(buffer, stdout);
  } while(count);

  close(sock);
  return 0;
}
