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
/* Head ends here */
int insertionSort(vector <int>  ar)
{
    int i,j,k,v;
    int count =0 ;
    for(i=1; i<ar.size(); i++)
    {
        v = ar[i];
        j=i;
        while(ar[j-1]>v&&j>=1)
        {
            ar[j] = ar[j-1];
            j--;
            count++;
        }
        ar[j] = v;
    }
    return count;
}
/* Tail starts here */
int main(void)
{
    vector <int>  _ar;
    int _ar_size;
    int n;
    cin>>n;
    while(n--)
    {
        cin >> _ar_size;
        for(int _ar_i=0; _ar_i<_ar_size; _ar_i++)
        {
            int _ar_tmp;
            cin >> _ar_tmp;
            _ar.push_back(_ar_tmp);
        }
        cout<<insertionSort(_ar)<<endl;
        _ar.erase(_ar.begin(),_ar.end());
    }
    return 0;
}
