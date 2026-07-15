
// Defines sockaddr_in structure
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>

#define PORT 8888

int main(int argc, char const* argv[])
{

    int server_fd, new_socket;
    
    // Basically an int? "a signed integer type used extensively in POSIX-compliant 
    // APIs (like Linux and macOS) to represent data sizes, byte counts, or a negative error indicator"
    ssize_t valread;

    // struct of type "sockaddr_in". An IP address.
    struct sockaddr_in address;
    int opt = 1;
    socklen_t addrlen = sizeof(address);
    
    // Allocate a buffer of chars, initalize each value to 0
    char buffer[1024] = { 0 };

    char* hello = "Hello from the server";



    return 0;
}