#include <stdio.h>

struct a
{
    struct b
    {
        int i;
        float f;
        char ch;
    }x;
    struct  c
    {
        int j;
        float g;
        char ch;
    }y;
};

void fun(struct c *p)
{
    int of;
    struct b *add;
    of = (char *)&((struct c *)(&((struct a*)0)->y)->j)-(char *)((struct a*)0);
    add = (struct b *)((char *)&(p->j)-of);
    add->i=10;
    add->f = 3.4;
    add->ch = 'f';
}
int main()
{
    int *p;
    struct a z;
    fun(&z.y);
    printf("%d\n%f\n%c",z.x.i,z.x.f,z.x.ch);
    return 0;
}
