#include <arpa/inet.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>
#include <stdio.h>
#include <ctype.h>


void sys_err(const char* str) {
    perror(str);
    exit(1);
}

int main() {
    struct sockaddr_in serv_addr;
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(7777);
    inet_pton(AF_INET, "192.168.128.140", &serv_addr.sin_addr.s_addr);
    int cfd = socket(AF_INET, SOCK_STREAM, 0);
    int ret =connect(cfd,(struct sockaddr*)&serv_addr, sizeof(serv_addr));
    if(ret == -1) {
        sys_err("conntect error");
        return -1;
    }
    write(cfd, "buf1",5);

    close(cfd);
    return 0;
}