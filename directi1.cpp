#include<iostream>
#include<cmath>
using namespace std;

//when 7777.777....77(upto 101) is divided by 440. what is remiander?
/*int main()
{
    int div = 440;
    int n = 297;
    int k;
    cin>>k;
    if(k>101)
        return 0;
    for(int i=0;i<k;i++)
        n = (n*10+7)%440;

    cout<<n;
    return 0;
}

*/
/*
//number of ones from 1 to 100 in binary representation
int ones(int n)
{
    int cnt=0;
    while(n)
    {
        if(n&1==1)
            cnt++;
        n>>=1;
    }
    return cnt;
}

int main()
{
    int sum=0;
    for(int j=1;j<=100;j+=10)
    {sum=0;
    for(int i=j;i<=j+9;i++)
    {
        sum+=ones(i);
    }
    cout<<sum<<" ";
    }
    return 0;
}
*/

int main()
{
    long n=12332443,sum=0;
    while(n>9)
    {
        sum=0;
        while(n)
        {
            int k=n%10;
            sum+=k;
            n = n/10;
        }
        n = sum;
    }
    cout<<n;
    return 0;
}
