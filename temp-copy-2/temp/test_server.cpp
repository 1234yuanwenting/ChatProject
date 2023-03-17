#include "server.h"
int main()
{   
    //创建实例，传入端口号和ip作为构造函数参数
    server serv(8000,"127.0.0.1");
    serv.run(); 
}