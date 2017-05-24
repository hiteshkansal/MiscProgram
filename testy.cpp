#include <iostream>
using namespace std;

int main()
{
    int a,orig,b;
    cin>>a>>b;
    orig = a;
    int count = 0;
    while(a>0)
    {
        a = a >> 1 << 1;
        if(orig-a==1)
            count++;
        orig = a >> 1;
        a = orig;
    }
    cout<<count<<endl;
}
