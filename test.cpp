#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    istream_iterator<int> cc(cin);
    istream_iterator<int> eof;
    vector<int> ivec(cc,eof);
    sort(ivec.begin(),ivec.end());
    ostream_iterator<int> out(cout,"");
    unique_copy(ivec.begin(),ivec.end(),out);
    return 0;
}
