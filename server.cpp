#include <arpa/inet.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <thread>
#include <stdio.h>
#include <ctype.h>
using namespace std;
#define SERV_PORT 7777
void sys_err(const char *str);
void handleClient(sockaddr_in clit_addr, int cfd);

void handleClient(sockaddr_in clit_addr, int cfd)
{
    if (cfd == -1)
    {
        sys_err("accept error");
    }
    char client_IP[24] = {0};
    printf("client ip:%s    port:%d\n", inet_ntop(AF_INET, &clit_addr.sin_addr, client_IP, sizeof(client_IP)), ntohs(clit_addr.sin_port));
    while (1)
    {
        char buf[1024];
        memset(buf, 0, sizeof(buf));
        int len = read(cfd, buf, sizeof(buf));
        if (len > 0)
        {
            printf("服务器say: %s\n", buf);
        }
        else if (len == 0)
        {
            printf("服务器断开了连接...\n");
            break;
        }
    }
    close(cfd);
}

void sys_err(const char *str)
{
    perror(str);
    exit(1);
}

// 服务端TCP流程
int main(int argc, char *argv[])
{
    int sfd = 0, cfd = 0;

    int ret, i;

    // 1、服务端地址、接收的客户端地址
    struct sockaddr_in serv_addr, clit_addr;

    socklen_t clit_addr_len;

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(SERV_PORT);
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    // 2、socket服务端文件描述符
    sfd = socket(AF_INET, SOCK_STREAM, 0);

    if (sfd == -1)
    {
        sys_err("Socket error");
    }
    // 3、bind绑定套接字地址
    bind(sfd, (const struct sockaddr *)&serv_addr, sizeof(serv_addr));

    // 4、listen监听客户端连接请求
    listen(sfd, 128);

    clit_addr_len = sizeof(clit_addr);

    // 5、accept：阻塞等待连接，当连接成功时，客户端的地址结构会填入clit_addr
    while (1)
    {
        cfd = accept(sfd, (struct sockaddr *)&clit_addr, &clit_addr_len);
        thread clt_thread(handleClient, clit_addr, cfd);
        clt_thread.detach();
    }

    // 7、关闭连接
    close(sfd);
}