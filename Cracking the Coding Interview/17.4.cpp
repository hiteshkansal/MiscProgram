#include<iostream>
#include<limits.h>
using namespace std;

int flip(int a)
{
    return (a^1);
}

int sign(int a)
{
    return flip((a>>31) & 1);
}

int main()
{
    int k,q;
    int a = INT_MIN, b=20;
    cout<<a<<endl;
    int sa = sign(a);
    int sb = sign(b);
    int sc = sign(a-b);
    if(sa!=sb)
        k = sa;
    else
        k = sc;
    q = flip(k);
    cout<<(a*k+b*q);
    return 0;
}
