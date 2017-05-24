#include<iostream>
using namespace std;
void fun()
{
    static int a=5;
    if(a==0)
    return;

    cout<<a;
    a--;
    fun();
}
int main()
{
    fun();
    return 0;
}
