#include<iostream>

using namespace std;

int main()
{
    int a;
    {
        typedef int s;
        s i = 4;
    }
    s j =8;
    return 0;
}
