#include <iostream>
#include <map>

using namespace std;

int showbits(int *a,int n)
{
    int i,k,andmask,c=0;
    for(i=31; i>=0; i--)
    {
        andmask = 1<<i;
        k = n&andmask;
        if(k == 0)
            a[i]=0;
        else{
            a[i]=1;
            c++;
        }
    }
    return c;
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
        int c = showbits(arr,a);
        for(i=0; i<32; i++)
            if(arr[i]==1)
                cnt++;
        cout<<a<<" c : "<<c<<endl;
        a++;
    }
    cout<<cnt<<endl;
    }
    return 0;
}

