#include <stdio.h>

int main()
{
    char *names[] = {"hitesh","hgjhf","fsdfsdf"};
    int i;
    char *t;
    t=names[1];
    names[1] = names[2];
    names[2] = t;
    for(i=0;i<3;i++)
    printf("%s\n",names[i]);
    return 0;
}
