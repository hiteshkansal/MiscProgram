#include<iostream>
using namespace std;

int next_higher(int n)
{
    int c = n;
    int c0 = 0, c1 =0;
    while(((c&1)==0) && c!=0)
    {
        c0++;
        c>>=1;
    }
    while((c&1)==1)
    {
        c1++;
        c>>=1;
    }
    if(c0+c1==31 || c0+c1==0)
        return -1;
    /*int p = c0+c1;
    n |= (1<<p);
    n &= ~((1<<p)-1);
    n |= (1<<(c1-1)) - 1;
    return n;
    */
    return n+(1<<c0)+(1<<(c1-1))-1;
}

int prev_smaller(int n)
{
    int c=n;
    int c0=0,c1=0;
    while((c&1)==1)
    {
        c1++;
        c>>=1;
    }
    if(c==0)
        return -1;
    while(((c&1)==0) && c!=0)
    {
        c0++;
        c>>=1;
    }
    int p = c0+c1;
    /*
    n &= ~((1<<(p+1))-1);
//    n &= ((~0)<<(p+1));
    int mask = (1<<(c1+1))-1;
    n |= mask<<(c0-1);
    return n;
    */
        return n-(1<<c1)-(1<<(c0-1))+1;
}
int main()
{
    int n = 7036;
    int h = 10115;
    cout<<next_higher(n)<<endl;
    cout<<prev_smaller(h)<<endl;
    return 0;
}
