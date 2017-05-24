#include<iostream>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>
#include<fstream>

using namespace std;
typedef vector<int> v;
int main()
{
    istream_iterator<int> in(cin), eof;

    //v vec;
    v vec1(in,eof);
    v :: iterator it;
    sort(vec1.begin(), vec1.end());
    ostream_iterator<int> out(cout," ");

    unique_copy(vec1.begin(), vec1.end(), out);
/*
    while(in!=eof)
    {
        //vec.push_back(*in++);
        *out++ = *in++;
    }

   for(it=vec1.begin(); it!=vec1.end();it++)
    cout<<*it<<" ";
*/
    return 0;
}
