#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s1="hitesh kansal";
    string s2 = "tesh kansal hi";
    s2.append(s2);
    cout<<s2<<endl;
    if(s2.find(s1)!=std::string::npos)
        cout<<"Yes";
    else
        cout<<"NO";
    return 0;
}
