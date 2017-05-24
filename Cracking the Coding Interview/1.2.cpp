#include<iostream>
#include<string.h>

using namespace std;

void revers(char *str)
{
    char *t,*k=str;
    t=str;
    char temp;
    while(*t!='\0')
        t++;
    t--;
    while(str<t)
    {
        temp = *t;
        *t = *str;
        *str=temp;
        str++;
        t--;
    }
    cout<<k;
}

int main()
{
    char a[] = "palindrome";
    revers(a);
    return 0;
}
