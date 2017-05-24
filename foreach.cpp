#include<iostream>
#include<list>
using namespace std;

typedef struct fo
{
    int x;
    char s;
}fo;

int main()
{
    int a[] = {11,2,4,5};
    list<fo> ll;
    fo f[3];
    for(int i=0;i<3;i++)
    {
        f[i].x=i+1;
        f[i].s= i+'a';
    }
    for(int i=0;i<3;i++)
    ll.push_back(f[i]);

    for(fo &i : f)
        cout<<i.x<<" "<<i.s<<endl;
    return 0;
}
