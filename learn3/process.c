#include"process.h"

char style[S_NUM]={'-', '.', '#', '>', '+'};


void processon()
{
    int cnt = 0;
    char bar[NUM];
    memset(bar, '\0', sizeof(bar));

    //reverse
    const char *lable = "|\\-/";

    // 101 times
    while(cnt <= 100)
    {
        //printf("[%-100s][%d%%][%c]\r", bar, cnt, lable[cnt%4]);
        printf("\033[42;34m[%-100s][%d%%][%c]\033[0m\r", bar, cnt, lable[cnt%4]);
        fflush(stdout);
        bar[cnt++] = style[N];
        //sleep(1);
        usleep(50000); //5S/100 == 0.05S == 50000
    }

    printf("\n");




}
