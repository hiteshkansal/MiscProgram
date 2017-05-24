#include <iostream>
#include <vector>
#define CAS 2147483647

using namespace std;

vector<unsigned int> pos;
vector<unsigned int> neg;

int showbits(int n)
{
    int i,k,andmask,cnt;
    for(i=31; i>=0; i--)
    {
        andmask = 1<<i;
        k = n&andmask;
        k == 1 ? cnt++:0;
    }
    return cnt;
}

int main()
{
    int i,t,j=0;
    int a,b,cnt=0;
    cout<<"a";
    pos.push_back(showbits(j));
    for(j=1; j<CAS; j++)
    {
        pos.push_back(showbits(j));
        neg.push_back(showbits(-j));
    }
    neg.push_back(showbits(-j));
    cout<<"a";
    for(j=1; j<5; j++)
    {
        cout<<pos[j]<<"  "<<neg[j]<<endl;
    }
    /*cin>>t;
    while(t--)
    {
        cnt = 0;
        cin>>a>>b;
        while(a<=b)
        {
            if(a<0)
                cnt += neg[-a];
            else
                cnt += pos[a];
            a++;
        }
        cout<<cnt<<endl;
    }
    */
    return 0;
}

