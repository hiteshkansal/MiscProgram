#include <stdio.h>

int main()
{
    static char str1[] ="Good";
    static char str2[20];
    static char str3[20] = "Day";
    int i;
    i= strcmp(strcat(str3,strcpy(str2,str1)),strcat(str3,"good"));
   // printf("%s\n%s\n%s\n",str1,str2,str3);
    printf("%d\r",i);
    printf("hello");
    printf("\r");
    printf("c: rc\bigdfgdfgn\random");
    return 0;
}
