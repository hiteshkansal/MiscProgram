#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int *a;
int v;
int mx=0;
int isSafe(int index,int val,int op)
{
    int m=1;
    for(int j=0; j<index; j++)
        m*=a[j];
    m*=val;
    if(m<v)
        return m;
    else
        return 0;
}
int putNum(int op,int index)
{
    int m;
    if(index>=op)
        return 1;
    for(int j=9; j>=2; j--)
    {
        if(m=isSafe(index,j,op))
        {
            a[index]=j;
            if(putNum(op,index+1)==1)
            {
                if(mx<m)
                {
                    mx=m;
                }
            }
        }
    }
    return mx;
}
int largestMultiply(int D,int op)
{
    int m;
    v=pow(10,D);
    a=new int[op];
    for(int i=0; i<op; i++)
    {
        a[i]=2;
    }
    if(putNum(op,0))
        return mx;
    else return -1;
}
int main()
{
    int d,o,m=1;
    cin>>d>>o;
    if(d<o)
    {
        if(largestMultiply(d,o)!=-1)
        {
            cout<<mx;
        }
        else
            cout<<-1;
    }
    else
    {
        cout<<pow(9,o);
    }
}
