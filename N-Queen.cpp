#include<iostream>
#include<string.h>
using namespace std;

int *x;
bool flag;
int abs(int n)
{
    if(n<0)
        return (-1*n);
    return n;
}
bool place(int r, int c)
{
    for(int j=0; j<r;j++)
    {
        if(abs(x[j]-c)==abs(j-r)||x[j]==c)
            return false;
    }
    return true;
}

void NQueen(int r, int n)
{
    for(int i=0;i<n && flag;i++)
    {
        if(place(r,i))
        {
            x[r] = i;
            if(r==n-1){
                flag = false;
                return;
            }
            else
                NQueen(r+1,n);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    if(n<4)
    {
        cout<<"Enter greater than 4.";
        return 0;
    }
    x = new int[n];
    memset(x,0,sizeof(int));
    flag = true;
    NQueen(0,n);
    for(int i=0;i<n;i++)
        cout<<x[i]<<" ";
    return 0;
}
