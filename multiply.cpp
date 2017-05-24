#include<iostream>

using namespace std;

int main()
{
    int a[] = {2,1,5,7,10,0};
    int n = sizeof(a)/sizeof(a[0]),in,product=1;
    bool zero = false;
    int res[n];
    for(int i=0; i<n; i++)
        res[i] = 0;
    for(int i=0; i<n; i++)
    {
        if(zero && a[i]==0)
        {
            cout<<"All value are zero.";
            return 0;
        }
        if(a[i]==0)
            zero = true,in = i;
    }
    for(int i=0; i<n; i++)
    {
        if(in==i)
            continue;
        product *= a[i];
    }

    if(zero)
    {
        res[in] = product;
        cout<<res[in];
        return 0;
    }

    for(int i=0; i<n; i++)
        res[i] = product/a[i];

    for(int i=0; i<n; i++)
        cout<<res[i]<<" ";
    return 0;
}
