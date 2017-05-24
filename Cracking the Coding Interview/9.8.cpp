#include<iostream>

using namespace std;

int makechange(int n, int d)
{
    int nd=0;
    switch(d)
    {
    case 25:
        nd = 10;
        break;

    case 10:
        nd = 5;
        break;
    case 5:
        nd = 1;
        break;
    case 1:
        return 1;
    }
    int way = 0;
    for(int i=0;i*d<=n;i++)
    {
        way+=makechange(n-i*d,nd);
    }
    return way;
}

int main()
{
    cout<<makechange(10,25);
    return 0;
}
