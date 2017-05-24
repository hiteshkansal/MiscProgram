#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream
#include <vector>
#include <stack>
#include <list>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    const int sz = 10;
    stack<int> s;
    int i=0;
    while(s.size()!=sz)
        s.push(++i);
    while(s.empty()==false)
    {
        int value = s.top();
        cout<<"Poopoed item is: "<<value<<endl;
        s.pop();
    }
    return 0;
}
