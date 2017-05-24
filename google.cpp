#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char c[] = "IDDDIDDIDD";
    int *a;
    int n = sizeof(c)-1;
    a = new int[n+1];
    int sz = n+1;
    int i=n-1,j=n,k,p;

    for(k=n-1; k>0;)
    {
        while(c[i]!='I'&&i>0)
            i--;
        k=i;
        if(i==0)
            break;
        while(i!=j)
        {
            a[i++] = sz--;
        }
        j=k;
        i = j-1;
    }
    if(c[i]=='D'&&i==0)
    {
        while(i!=j+1)
        {
            a[i++] =sz--;
        }
    }
    else if(c[i]=='I'&&i==0)
    {
        int m = sz--;
        i++;
        while(i!=j)
        {
            a[++i] = sz--;
        }
        a[0] = sz;
        a[1]=m;
    }
    for(i=0; i<n+1; i++)
        cout<<a[i]<<" ";
    return 0;
}
