#include<stdio.h>
#include<malloc.h>

int main()
{
    int *ptr, *val, i;
    int *fun(int*);
    val = fun(ptr);
    for(i=0;i<5;i++)
        printf("%d ",*(val+i));
    return 0;
}
int *fun(int *p)
{
    p = (int*)calloc(5,sizeof(int));
    return p;
}
