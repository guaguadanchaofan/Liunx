#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
    //while(1)
    //{
    //    sleep(1);
    //}
    //printf("pid:%d",getpid());
    //printf("ppid:%d",getppid());

    
    //创建子进程
    //int ret = fork();
    //printf("hello proc:%d!,ret:%d\n",getpid(),getppid());
    //sleep(1);
    

    //int ret =fork();
    ////如果小于0说明子进程创建失败
    //if(ret<0)
    //{
    //    perror("fork");
    //    return 1;
    //}
    ////等于0 说明子进程创建成功
    //else if(ret ==0)
    //{
    //    printf("hello i am child:%d,ret:%d\n",getpid(),ret);
    //}

    ////否则则为父进程
    //else{
    //    printf("hello i am father:%d,ret:%d\n",getpid(),ret);
    //}
    //sleep(20);
    
    

    //僵尸进程
    //获取进程pid
    //pid_t id=fork();
    //if(id<0)
    //{
    //    perror("fork");
    //    return 1;
    //}
    //else if(id==0)
    //{
    //    printf("i am child:%d, id:%d\n",getpid(),id);
    //    sleep(5);
    //    //子进程异常退出 父进程没有调用wait（）回收子进程 造成僵尸进程
    //    exit(EXIT_SUCCESS);
    //}
    //else
    //{
    //    printf("i am father:%d ,id:%d\n",getpid(),id);
    //    sleep(30);
    //}
    

    //孤儿进程(父进程退出子进程继续运行)
    //创建子进程
    pid_t id=fork();
    //进程创建失败
    if(id<0)
    {
        perror("fork");
        return 1;
    }
    //子进程
    else if(id == 0)
    {
        printf("i am child pid:%d id:%d",getpid(),id);
        sleep(10);
    }
    //父进程
    else
    {
        printf("i am father pid:%d id:if:%d",getpid(),id);
        sleep(5);
        exit(0);
    }


    return 0;
}
