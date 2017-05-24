#include<stdio.h>
#define dprint(expr) printf(#expr "= %g \n",expr)
#define concat(x,y) x##y

int main()
{
    int x = 10, y=2;
   // printf("%g",x/y);
    x = concat(1,2);
    printf("%d",x);
    return 0;
}
