#include<iostream>
#include<stdlib.h>

using namespace std;

int len(char *c)
{
    //cout<<*c<<endl;
    static int cnt=0;
    if(*c==NULL)
        return cnt;
    cnt++;
    len(++c);
    return cnt;
}

int main()
{
    char *a = "HELLO! Hitesh";
    cout<<len(a);
    return 0;
}
