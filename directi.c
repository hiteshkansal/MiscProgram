#include <stdio.h>
#define SIZE 10

int a[SIZE+1] = {0};
int count;
int idx;
int resolve_location(int from, int to, int free)
{
    if(a[from]!=free)
    {
        a[free] = a[to];
        a[to] = a[from];
        count += 2;
    }
    else
    {
        count++;
        a[free] = a[from];
    }
        return from;
}
int main()
{
    int NTest, i, j, NCars;

    scanf( "%d", &NTest );

    while(NTest--)
    {
        scanf( "%d", &NCars );
        count = 0;

        for(i = 0; i < NCars; ++i)
            scanf( "%d", &a[i] );

        idx = NCars;
        a[NCars] = NCars;

        for(i = 0; i <= NCars; ++i)
        {
            if(a[i] == i)
                continue;

            idx = resolve_location(i, a[i], idx);
        }
        printf( "%d\n", count );
        int hi;
        for(hi=0;hi<NCars;hi++)
            printf( "%d ", a[hi] );
    }

    return 0;
}
/*
void f(char *x)
{
    x++;
    *x = 'a';
}
int main()
{
    char *str = "hello";
    f(str);
    printf("%s", str);
    return 0;
}
*/
