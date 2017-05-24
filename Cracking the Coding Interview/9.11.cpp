#include<iostream>
#include<map>
#include<string.h>
int fact[50];
using namespace std;

int facto(int n)
{
    if(n==0 || n==1)
        return 1;
    if(fact[n]!=0)
        return fact[n];
    return fact[n] = n*facto(n-1);
}

int paran(string str, bool res, int s, int e, map<string,int> m)
{
    string key = ""+s+e;
    int c=0;
    auto it = m.find(key);
    if(it==m.end())
    {
        if(s==e)
            if(str[s] == '1')
                c=1;
            else
                c=0;
    for(int i=s+1;i<=e;i+=2)
    {
        char op = str[i];
        if(op=='&')
            c+=paran(str,res,s,i-1,m) * paran(str,res,i+1,e,m);
        else if(op == '|')
        {
            int left = (i-1-s)/2;
            int right = (e-i-1)/2;
            int total = facto(left) * facto(right);
            int flse = paran(str, false, s, i-1, m) * paran(str, false, i+1, e, m);
            c+= total-flse;
        }
        else if(op=='^')
        {
            c+= paran(str, false, s, i-1, m) * paran(str, true, i+1, e, m);
            c+= paran(str, true, s, i-1, m) * paran(str, false, i+1, e, m);
        }
    }
    m.insert({key,c});
    }
    else
        c = it->second;
    if(res)
        return c;
    else
    {
        int n = (e-s)/2;
        return facto(n)-c;
    }
}
int main()
{
    string s = "1^0|0|1";
    int e = s.length();
    map<string,int> m;
    cout<<paran(s,true,0,e,m);
    return 0;
}
