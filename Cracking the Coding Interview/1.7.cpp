#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
    int a[][3] = {1,2,0,3,4,5,6,0,7};
    const int n=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    int row[n]= {0}, col[n]= {0};
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            if(a[i][j]==0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    for(int i=0;i<n;i++)
        for(int j=0; j<n; j++)
        {
            if(row[i] || col[j])
                a[i][j] = 0;
        }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
