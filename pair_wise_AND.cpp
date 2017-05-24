#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
unsigned long long int sum(vector<unsigned long long int> v)
{
    int i,j;
    unsigned long long int s =0;
    for(i=0;i<v.size();i++)
        for(j=i+1;j<v.size();j++)
            s += v[i]&v[j];
    return s;
}

int main()
{
    int i;
    unsigned long long int n,a;
    cin>>n;
    vector<unsigned long long int> vec;
    for(i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    cout<<sum(vec);
    return 0;
}
