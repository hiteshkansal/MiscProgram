#include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair<int, int> p;
    p = make_pair(3,5);

    while(cin>>p.first>>p.second)
    cout<<p.first<<endl<<p.second<<endl;

    return 0;
}
