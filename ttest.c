#include<stdio.h>

int mul(int*, int*);

void main()
{
    int x=10, y=20;
    int (*p)(int*,int*);
    p=mul;
    printf("%d",(*p)(&x,&y));
}

int mul(int *a, int *b)
{
    int m;
    m=*a**b;
    return m;
}
