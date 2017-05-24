#include<iostream>
#include<string.h>

using namespace std;

bool perm(char *a, char *b)
{
    int temp1[256]= {0};
    int temp2[256]= {0};
    int n1 = strlen(a);
    int n2 = strlen(b);
    for(int i=0; i<n1; i++)
        temp1[a[i]]++;

    for(int i=0; i<n2; i++)
        temp2[b[i]]++;

    for(int i=0;i<256;i++)
    {
        if(temp1[i]!=temp2[i])
            return false;
    }
    return true;
}

int main()
{
    char a[] = "hello";
    char b[] = "loehl";
    if(strlen(a)!=strlen(b))
        cout<<"no";
    else
    {
        if(perm(a,b))
            cout<<"yes";
        else
            cout<<"no";
    }
    return 0;
}
