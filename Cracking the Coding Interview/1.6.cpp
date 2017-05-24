#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int a[][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n=sizeof(a)/sizeof(a[0]);
    for(int layer =0;layer<n/2;layer++)
    {
        int first = layer;
        int last = n-layer-1;
        for(int i=first;i<last;i++)
        {
            int offset = i-first;
            int top = a[first][i];
            a[first][i] = a[last-offset][first];
            a[last-offset][first] = a[last][last-offset];
            a[last][last-offset] = a[i][last];
            a[i][last] = top;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
    cout<<endl;
    }
    return 0;
}
