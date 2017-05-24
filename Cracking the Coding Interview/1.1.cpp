#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

bool uniqu(char *a)
{
    int temp[256]= {0};
    int n = strlen(a);
    for(int i=0; i<n; i++)
    {
        if(temp[a[i]]==1)
            return false;
        temp[a[i]]++;
    }
    return true;
}

bool uniq(char *a)
{
    int chk =0;
    int n = strlen(a);
    for(int i=0;i<n;i++)
    {
        int v = a[i]-'a';
        if((chk & (1<<v))>0)
            return false;
        chk |= (1<<v);
    }
    return true;
}

int main()
{
    char a[] ="hitesfdlb";
    if(uniq(a))
        cout<<"unique";
    else
        cout<<"not unique";
    return 0;
}
