#include <iostream>
#include <map>

using namespace std;


int main()
{
    int i;
    int a;
    cin>>a;
    char *c = (char *)&a;
        cout<<(int)*c<<" ";
    for(i=0; i<3; i++)
    {
        c++;
        cout<<(int)*c<<" ";
    }

    return 0;
}


