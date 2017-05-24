#include<iostream>
#include<math.h>

using namespace std;

int result(int n)
{
    return log2(n);
}

bool powerof2(int n)
{
    if(!(n&(n-1)))
        return true;
    return false;
}

int main()
{
    int n = 16;
    if(powerof2(n))
        cout<<result(n);
    else
        cout<<"no. have more than one 1 bit set.";
    return 0;
}
