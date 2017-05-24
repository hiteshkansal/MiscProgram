#include <stdio.h>

float * fun(int i, int j)
{
    auto float hh;
    hh= i*j;
    return(&hh);
}
int main()
{
    float i=9,j=3,*k;
    k=fun(i,j);
    printf("%u\n%u\n%f",k,fun(2,2),*k);
    return 0;
}
