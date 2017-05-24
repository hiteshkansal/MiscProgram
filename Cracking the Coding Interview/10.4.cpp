#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    bitset<32000> b;
    int a[32000];
    for(int i=0;i<32000;i++)
        a[i] = i+1;
    a[31999] = 6;
    a[31] = 16;
    a[319] = 26;

   for(int i=0;i<32000;i++)
   {
       int num = a[i];
       int n = num-1;
       if(b.test(n))
        cout<<num<<" ";
       else
        b.set(n);
   }
    return 0;
}
