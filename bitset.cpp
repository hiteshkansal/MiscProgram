#include<iostream>
#include<vector>
#include<bitset>
using namespace std;

int main()
{
    string s="000111010";
    unsigned long ul;
    bitset<32> b(s);
    ul= b.to_ulong();
    cout<<ul<<endl;
    b.set(31);
    b.flip();
    cout<<b;
    return 0;
}
