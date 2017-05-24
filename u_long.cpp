#include<iostream>
#include<stdexcept>
#include<bitset>

using namespace std;

int main()
{

    bitset<33> b;
    b[32]=1;
    b[0]=1;
    try
    {
    unsigned long a = b.to_ulong();
    }
    catch(overflow_error e)
    {
        cout<<e.what();
    }
    return 0;
}
