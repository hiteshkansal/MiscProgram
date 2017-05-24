#include<iostream>
#include<string.h>
using namespace std;

typedef struct res
{
    int hit=0;
    int phit = 0;
}res;

int code(char c)
{
    switch(c)
    {
    case 'R':
        return 0;
    case 'G':
        return 1;
    case 'B':
        return 2;
    case 'Y':
        return 3;
    default:
        return -1;
    }
}

int main()
{
    char gs[] = "RRGB";
    char sol[] = "RGBY";
    res r;
    int *fre = new int[4];
    for(int i=0;i<strlen(gs);i++)
    {
        if(sol[i]==gs[i])
            (r.hit)++;
        else
            fre[code(gs[i])]++;
    }
    int v;
    for(int i=0;i<strlen(sol);i++)
    {
        v = code(sol[i]);
        if(v>=0 && fre[v]>0&&sol[i]!=gs[i])
        {
            (r.phit)++;
            fre[v]--;
        }
    }
    cout<<r.hit<<" "<<r.phit;
    return 0;
}
