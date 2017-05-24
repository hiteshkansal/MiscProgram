#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int a[] = {3,2,5,7,4,1,9,9};
    int x = 3, y =4;
    int n = sizeof(a)/sizeof(a[0]);
    int i=0,j=0, min = 100;

    while(a[i] != x && a[i] != y)
        i++;
    if(i==n-1)
        return -1;
    int prev = i;
    for(int j=i+1;j<n;j++)
    {
        if(a[j]==x || a[j]==y)
        {
            if(a[prev]!=a[j] && min>(j-prev))
            {
                min = j-prev;
                prev = j;
            }
            else
                prev = j;
        }
    }

    cout<<min;
    return 0;
}
