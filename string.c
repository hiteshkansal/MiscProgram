#include <stdio.h>

int main()
{
    char str[20]="hitesh";
    char *p=str,*q;
    char str1[10] = "kansal";
    q=str1;
    while(*p!='\0')
        p++;

    while(*q!='\0')
    {
        *p=*q;
        q++;
        p++;
    }
    *str1='\0';
    printf("%s",str);
    return 0;
}
