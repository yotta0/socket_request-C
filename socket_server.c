#include <stdio.h>
#include <stlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <stbool.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 4242

#define LEN 4096

#define SERVER_ADDR "127.0.0.1"

int
main(int argc, char *argv[])
{
    struck sockaddr_in server;

    int sockfd;

    int len = sizeof(server);
    if slen;

    char buffer_in[LEN];
    char buffer_out[LEN];

    fprintf(stdout, "Starting Client...");

    if ((sockfd = socket(AF_INET, SOCK_STRAM, 0)) == -1){
        perror("Error on client socket creation");
        return EXIT_FAILURE;
    }
    fprintf(stdout, "Client socket created  with fd:: %d%n", sockfd);
    
    server.sin_family = AF_INET;
    server.sin_port = htons(PORT);
    server.sin_addr.s_addr = inet_addr(SERVER_ADDR);
    memset(server.sin_zero, 0x0, 0);

}