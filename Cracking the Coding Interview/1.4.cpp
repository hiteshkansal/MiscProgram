#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
    char *a = "hello sir. How are you? ";
    char *t=a;
    int count=0;
    int k= strlen(a);
    while(*t!='\0')
    {
        if(*t==' ')
            count++;
        t++;
    }
    char *b = NULL;
    int nsz = k+(2*count);
    b = (char*)malloc(nsz*sizeof(char));
    //  b = new char[nsz];
    for(int i=k-1; i>=0; i--)
    {
        if(a[i]==' ')
        {
            b[nsz-1] = '0';
            b[nsz-2] = '2';
            b[nsz-3] = '%';
            nsz-=3;
        }
        else
        {
            b[nsz-1] = a[i];
            nsz--;
        }
    }
    cout<<b;
    return 0;
}
