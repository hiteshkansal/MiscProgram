#include<iostream>
#include<stdlib.h>
#include<sstream>
using namespace std;

int main()
{
    double n = 0.5;
    string s = "0.";
    stringstream stream1;
    while(n>0)
    {
        if(s.size()>33)
        {
            cout<<"ERROR";
            return 0;
        }
        double t = n*2;
        if(t>=1)
        {
            s+="1";
            n=t-1;
        }
        else
        {
            s+='0';
            n = t;
        }
    }
    double k;
    //string to double
    stream1.str(s);
    stream1>>k;
    cout<<k<<endl;
    //double to string
    stream1<<k;
    s = stream1.str();
    cout<<s;
    return 0;
}
