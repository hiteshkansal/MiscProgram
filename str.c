#include <stdio.h>

const char* fun()
{
    return "hello";
}
int main()
{
   // char *str="hitesh";
    char *str1;
    str1=fun();
    *str1='k';
    //str1=str;
    printf("%s",str1);
    return 0;
}
