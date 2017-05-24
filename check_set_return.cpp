#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> set1;
    set1.insert({1,2,3,4});
    auto ret = set1.insert(3);
    cout<<*(ret.second)<<endl;
}
