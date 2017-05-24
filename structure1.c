#include<stdio.h>

typedef struct test
{
    int a;
    void print()
    {
        printf("%d",a);
    }
}test;
/*
void print()
{
    printf("%d",a);
}*/
int main()
{
    test t;
    t.a=5;
    t.print();
    return 0;
}
