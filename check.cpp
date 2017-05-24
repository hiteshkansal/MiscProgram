#include<iostream>

using namespace std;

int main()
{
    int a = 15;
    double b = 3.14;

    const int &c = b;
    b++;
    const int &d = c+a;
    cout<<a<<endl<<b<<endl;
    cout<<c<<endl<<d;
    return 0;
}
