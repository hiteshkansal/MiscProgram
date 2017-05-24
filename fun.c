#include <stdio.h>
#include <stdarg.h>

//using namespace std;

void print(int args,...)
{
    va_list vp;
    va_start(vp,args);
    int i;
    for(i=0;i<args;i++)
    printf("%c",va_arg(vp,int));
    va_end(vp);
}

int main()
{
    print(4,'f','e','t','y');
    system("PAUSE");
    return 0;
}
