#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream
#include<vector>
#include<list>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
    string s="hello hitesh";
    string s2="hi hitesh";
    cout<<s.find_last_not_of("hl")<<endl;
    //cout<<(s>s2);
    cout<<s.compare(s2)<<endl;
    if(s.find(s2)==string::npos)
    cout<<"hello";
    return 0;
}
