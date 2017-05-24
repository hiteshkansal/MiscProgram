#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int n)
{
    int a;
    int x = 0;
    while(n!=0)
    {
        a = n%10;
        n/=10;
        x+=a;
    }
    return x;
}
void fix(int base,int *arr)
{
    unsigned long long int key = base;
    while(key<=32000)
    {
        arr[key] = base;
        key += sum(key);
    }
}
int main()
{
    unsigned long long int n,s=0;
    int a[32000] = {0};
    fix(1,a);
    fix(3,a);
    fix(9,a);
    while(1)
    {
        s++;
        cin>>n;
        if(n==0||n>16384)
            break;
        while(n<=32000)
        {
            if(a[n]!=0)
            {
                cout<<"Case #"<<s<<"\nfirst meets river "<<a[n]<<" at "<<n<<endl<<endl;
                break;
            }
            n+=sum(n);
        }
    }
    return 0;
}
