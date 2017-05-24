#include<iostream>
using namespace std;

int main()
{
    int x = 230;
    cout<<(((x&0xaaaaaaaa)>>1) | ((x&0x55555555)<<1));
    return 0;
}
