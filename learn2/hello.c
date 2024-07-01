#include<stdio.h>
#include<stdlib.h>

int main()
{
    //printf("hello world\n");
    
    //int i = 0;
    //for(;env[i];i++)
    //{
    //    printf("%s\n",env[i]);
    //}

    //extern char **environ;
    //int i= 0;
    //for(;environ[i];i++)
    //{

    //    printf("%s\n",environ[i]);
    //}
    
    //printf("%s\n",getenv("PATH"));    
    
    char *env=getenv("MYENV");
    if(env)
    {
        printf("%s\n",env);
    }

    return 0;
}
