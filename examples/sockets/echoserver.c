#include <stdio.h>      // fgets, etc
#include <sys/socket.h> // socket API
#include <arpa/inet.h>  // inet functions, htons
#include <unistd.h>     // read/close system calls
#include <stdlib.h>     // exit
#include <string.h>     // strlen
#define PORT 9997

int main(void) {
  // Creating socket file descriptor (using internet protocol)
  int server_fd = socket(AF_INET, SOCK_STREAM, 0);
  if (server_fd == 0) {
    perror("socket failed");
    exit(EXIT_FAILURE);
  }

  // We want to use the internet protocol
  struct sockaddr_in address;
  address.sin_family = AF_INET;
  address.sin_addr.s_addr = INADDR_ANY;
  address.sin_port = htons(PORT);

  // Bind socket to the port (so it listens to that port)
  int result = bind(server_fd, (struct sockaddr *)&address, sizeof(address));
  if (result < 0) {
    perror("bind failed");
    exit(EXIT_FAILURE);
  }

  // Listen for connections
  result = listen(server_fd, 3);
  if (result < 0) {
    perror("listen");
    exit(EXIT_FAILURE);
  }

  // Listen will return when a connection is requested...
  // Accept that connection
  int addrlen = sizeof(address);
  int new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen);
  if (new_socket < 0) {
    perror("accept");
    exit(EXIT_FAILURE);
  }

  printf("Server connected to client.\n");

  char buffer[1024] = {0};
  int count = 0;
  do {
    // Read data (it waits until data is available)
    count = read(new_socket, buffer, 1024);
    printf("Server received %d bytes.\n", count);
    buffer[count] = '\0';
    write(new_socket, buffer, strlen(buffer));
  } while(count);

  close(new_socket);
  close(server_fd);
  return 0;
}

