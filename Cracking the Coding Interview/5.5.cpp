#include<iostream>
using namespace std;

int main()
{
    int a = 13;
    int b = 11;
    int cnt=0;
    for(int c = a^b;c!=0;c=c&(c-1))
        cnt++;
    cout<<cnt;
    return 0;
}
