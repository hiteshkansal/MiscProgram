#include<iostream>

using namespace std;

class test
{
    int i;
public :
    test(int i=0)
    {
        cout<<"hello";
    }
    test(test &t)
    {
        i = t.i;
    }
};

int main()
{
    test t1;
    test t2(t1);
    return 0;
}
