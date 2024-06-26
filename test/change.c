#include<stdio.h>
#include<ctype.h>


int main()
{
    int c;
    while((c = fgetc(stdin))!=EOF)
    {
        c =toupper(c);
        fputc(c,stdout);
    }
    return 0;
}
