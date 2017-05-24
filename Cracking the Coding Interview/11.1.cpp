#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int *a, *b,i,j;
    a = new int[10];
    b = new int[5];

    for(i=0;i<5;i++)
        a[i] = (i+2)*2;
    for(j=0;j<5;j++)
        b[j] = (j+1)*3;
    i--;
    j--;
    int t = i+j+1;

    while(i>=0 && j>=0)
    {
        if(a[i]>b[j])
        {
            a[t] = a[i];
            i--;
            t--;
        }
        else
        {
            a[t] = b[j];
            j--;
            t--;
        }
    }
    while(j>=0)
    {
        a[t] = b[j];
        j--;
        t--;
    }

    for(j=0;j<10;j++)
        cout<<a[j]<<" ";
    return 0;
}
