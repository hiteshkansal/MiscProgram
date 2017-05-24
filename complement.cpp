#include <iostream>
#include <vector>
#include <map>
#define CAS 1073741824

using namespace std;

map<int,int> pos;
map<int,int> neg;

int showbits(int *a,int n)
{
    int i,k,andmask,cnt;
    for(i=31; i>=0; i--)
    {
        andmask = 1<<i;
        k = n&andmask;
        k == 1 ? cnt++:0;
    }
    if(n>=0)
        pos[n] = cnt;
    else
        neg[-n] = cnt;
	return cnt;
}

int main()
{
    int i,t;
    int a,b,cnt=0;
    int arr[32];

    cin>>t;
    while(t--)
    {
    cnt = 0;
    cin>>a>>b;
    while(a<=b)
    {
        if(a<0 && neg.find(-a)!=neg.end())
            cnt += neg[-a];
        else if(a>=0 && pos.find(a)!=pos.end())
            cnt += pos[a];
        else
            cnt += showbits(arr,a);
        a++;
    }
    cout<<cnt<<endl;
    }
    return 0;
}

