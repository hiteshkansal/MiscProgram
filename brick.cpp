#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <stdio.h>
#include <cmath>

using namespace std;
unsigned long long int formula(int n)
{
    unsigned long long int ans=0;
    int i = n/4;
    int j = n%4;
    if(n>=4)
    {
        if((i-1)==0)
            ans = pow(2,i)+j;
        else
            ans = pow(2,i)+j+(3*(i-1));
    }
    else if(n==1||n==2||n==3)
        ans = 1;
    else if(n==0)
        ans = 0;
    cout<<"ans "<<ans<<endl;
    return ans;
}

int noPrime(unsigned long long int n)
{
    int c=0,v=0;
    if(n>=3)
    {
        c=2;
        for(int i=4; i<=n; i++)
        {
            v = 0;
            for(int j=2; j<=sqrt(i)+1; j++)
            {
                if(i%j==0)
                {
                    v = 1;
                    break;
                }
            }
            if(v==0)
                c++;
        }
    }
    else if(n==2)
        c=1;
    return c;

}

int main()
{
    int t,n;
    unsigned long long int way;
    cin>>t;
    while(t--)
    {
        cin>>n;
        way = formula(n);
        cout<<noPrime(way)<<endl;
    }
    return 0;
}
