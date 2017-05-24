#include<iostream>

using namespace std;

typedef enum color
{
    black,blue=2,red
};

int main()
{
    color c = blue;
    color c1 = black;

    if(c1==1)
        cout<<"df";
    else
        cout<<"no";
    return 0;
}
