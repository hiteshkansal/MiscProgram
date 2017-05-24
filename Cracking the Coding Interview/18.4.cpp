#include<iostream>
#include<sstream>
#include<math.h>
using namespace std;

int no2(int n, int d)
{
    int pw = pow(10,d);
    int npw = pw*10;
    int r = n%pw;
    int rd = n-(n%npw);
    int ru = rd+npw;

    int dg = (n/pw)%10;
    if(dg<2)
        return rd/10;
    if(dg>2)
        return ru/10;
    else
        return rd/10+r+1;
}

int main()
{
    int n,cnt=0;
    cin>>n;
    //string str = to_string(n);
    string str;
    stringstream ss;
    ss<<n;
    str = ss.str();
    for(int i=0;i<str.size();i++)
    {
        cnt+=no2(n,i);
    }
    cout<<cnt;
    return 0;
}
