#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main()
{
    int i =0;
    //进度条长度
    char buffer[100];
    //进度条初始化
    memset(buffer,0,sizeof(buffer));
    //动态旋转提示服
    const char *lable="|\\-/";
    while(i<=100)
    {
        printf("[%-100s][%d%%],[%c]\r",buffer,i,lable[i%4]);
        buffer[i++]='#';
        fflush(stdout);
        usleep(100000);
    }
    printf("\n");
    return 0;
}
