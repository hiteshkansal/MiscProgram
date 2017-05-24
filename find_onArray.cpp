#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

int main()
{
    int a[]= {1,2,3,4,5,6};
    int v= 4;
  // string s[] = {"hitesh", "kansal"};
  vector<string> s;
  s.push_back("hitesh");
  s.push_back("kansal");
    //cout<<s[0]<<s[1];
    int *p = find(a, a+6, v);
    cout<<accumulate(s.begin(),s.end()-1,string(" "));
    return 0;
}
