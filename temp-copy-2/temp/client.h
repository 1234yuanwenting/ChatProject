#ifndef CLIENT_H
#define CLIENT_H
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <iostream>
#include <thread>
#include <vector>
using namespace std;

class client{
    private:
        //服务器端口
        int server_port;
        //服务器ip
        string server_ip;
        //与服务器建立连接的套接字描述符
        int sock;
    public:
        client(int port,string ip);
        ~client();
        //启动客户端服务
        void run();
        //发送线程
        static void SendMsg(int conn);
        //接收线程
        static void RecvMsg(int conn);
        void HandleClient(int conn);
};
#endif
