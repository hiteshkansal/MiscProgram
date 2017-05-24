#include<iostream>
using namespace std;

int main()
{
    int n = 220;
    int m =1;
    int i=1, j=3;
    int new_m = m<<i;
    int all1 = ~0;
    int left = all1<<(j+1);
    int right = (1<<i)-1;
    int mask = left | right;
    int new_n = n&mask;
    cout<<(new_n | new_m);
    return 0;
}
