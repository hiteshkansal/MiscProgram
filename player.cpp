#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int *l;
int *dis;
int **a;
int numofPlayer(int n,int k)
{
    int m=0;
    l=(int*)malloc(sizeof(int)*k);
    for(int i=0;i<k;i++)
        l[i]=0;
    dis=(int*)malloc(sizeof(int)*(n));
    for(int i=0;i<k;i++)
        for(int j=0;j<n;j++)
           l[i]+=(int)pow(2,n-j-1)*a[i][j];

    dis[m]=l[0];
    for(int i=1;i<k;i++)
    {
        int t=0;
        for(int j=m;j>=0;j--)
        {
            t=dis[j]&l[i];

            if(t==dis[j])
                break;
            else if(t!=0)
                dis[j] = t;
        }
        if(t==0)
            dis[++m]=l[i];
    }
    return m+1;
}

int main()
{
    int n,k;
    cin>>n>>k;
    a=(int**)malloc(sizeof(int)*k);
    for(int i=0;i<k;i++)
        a[i]=(int*)malloc(sizeof(int)*n);

    for(int i=0;i<k;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];

    cout<<numofPlayer(n,k);
    return 0;
}
