#include<stdio.h>

int main()
{
    int a[]={12,23,34,45,56,67,78,89,90};
    int i;
    int *f =a, *g=&a[8];
        printf("%d\n",g-f);
    for(i=0;i<9;i++)
    {
        printf("%d  %u\n",*f,f);
        f++;
    }
}
