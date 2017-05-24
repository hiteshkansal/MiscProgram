#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

string insrt(string s, char c, int j)
{
    string st = s.substr(0,j);
    string ed = s.substr(j);
    return st+c+ed;
}

vector<string> perm(string s)
{
    vector<string> res;
    if(!s.size())
    {
        res.push_back("");
        return res;
    }
    char fst = s[0];
    string rem = s.substr(1);
    vector<string> words = perm(rem);
    for(string str : words)
    {
        for(int i=0;i<=str.size();i++)
        {
            string ss = insrt(str,fst,i);
            res.push_back(ss);
        }
    }
    return res;
}

int main()
{
    string s = "abc";
    vector<string> res;
    res = perm(s);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<endl;
    return 0;
}
