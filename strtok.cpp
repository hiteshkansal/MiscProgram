#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int cmp(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}

int main()
{
/*
   unsigned int y = 0xC;
   cout<<hex<<y<<endl;
   y = ~y;
   cout<<hex<<y<<endl;

*/
    int t =0;
    int j= (t=2,t+3);
    cout<<j;
/*

    char s[] = "hello hi r u?";
    char *p = strtok(s," ");
    while(p!=NULL)
    {
        cout<<p<<endl;
        p = strtok(NULL," ");
    }
/*
    int a[] = {12,6,11,16,5};
    int key = 5;
    int  n = sizeof(a)/sizeof(a[0]);
    qsort(a,n,sizeof(int),cmp);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    int *i = (int*)bsearch(&key,a,n,sizeof(int),cmp);
    cout<<*i<<endl;
    */
    return 0;
}

