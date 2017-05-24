#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int n=0;
    fp=fopen("hello.txt","r");
    while(1)
    {
        ch=fgetc(fp);
        printf("%c",ch);
        if(ch==EOF)
            break;
        n++;
    }
        close(fp);
    printf("no of character= %d",n);
    return 0;
}
