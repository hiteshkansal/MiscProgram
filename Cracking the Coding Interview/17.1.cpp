#include<iostream>

using namespace std;

int main()
{
    int a=10,b=20, c=10,d=20;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<a<<" "<<b<<endl;
    c = c-d;
    d = c+d;
    c = d-c;
    cout<<c<<" "<<d;
    return 0;
}
