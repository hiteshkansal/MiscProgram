#include <iostream>
#include <map>

using namespace std;

void showbits(int *a,int n)
{
    int i,k,andmask;
    for(i=31; i>=0; i--)
    {
        andmask = 1<<i;
        k = n&andmask;
        k == 0 ? (a[i]=0):(a[i]=1);
    }
}

int main()
{
    int i,t;
    int a,b,cnt=0;
    int arr[32];
    cin>>t;
    while(t--)
    {
    cnt = 0;
    cin>>a>>b;
    while(a<=b)
    {
        showbits(arr,a);
        for(i=0; i<32; i++)
            if(arr[i]==1)
                cnt++;
        a++;
    }
    cout<<cnt<<endl;
    }
    return 0;
}

