#include<iostream>
using namespace std;
/*
class hello
{
    public:
    hello()
    {
        cout<<"Hello";
    }


}h;
*/

void myStartupFun (void) __attribute__ ((constructor));

void myStartupFun (void)
{
    cout << "hello";
}
/*
void myStartupFun (void) __attribute__ ((constructor));

void myStartupFun (void)
{
    cout << "GeeksforGeeks";
}
*/
int main ()
{

}

