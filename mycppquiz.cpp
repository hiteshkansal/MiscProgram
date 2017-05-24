#include<iostream>
using namespace std;
/*
void fun(void *a, void *b)
{
}
int main()
{
    int x;
    fun(cout<<"a ", cout<<"b ");
    return 0;
}
*/
int main()
{
    char *c = "4{{1,2,3,443},{4,5,23,6},{1234,10,11,12},{12,2234,5345,34}";
    char *p =c;
    int x = *p-'0';
    int a[x][x];
    int i=0,j=0;
    p++;
    int temp=0;
    while((*p)!='\0')
    {
        temp=0;
        if(isdigit(*p))
        {
            temp = (*p)-'0';
            while(isdigit(*(p+1)))
            {
                temp = temp*10 + (*(p+1))-'0';
                p++;
            }
            a[i][j] = temp;
            j++;
            if(j==x)
                i++,j=0;
        }
        p++;
    }
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
