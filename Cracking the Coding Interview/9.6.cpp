#include<iostream>
#include<stdlib.h>

using namespace std;

void addparan(int left, int right, int in, char str[])
{
    if(left<0 || right<left)
        return;
    if(left==0 && right == 0)
        cout<<str<<endl;
    else
    {
        if(left>0)
        {
            str[in] = '(';
            str[in+1] = '\0';
            addparan(left-1,right,in+1,str);
        }
        if(right>left)
        {
            str[in] = ')';
            str[in+1] = '\0';
            addparan(left,right-1,in+1,str);
        }
    }
}

int main()
{
    int n=4;
    char *str = new char[n*2+1];
    addparan(n,n,0,str);
    return 0;
}
