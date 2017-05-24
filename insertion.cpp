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
void insertionSort(vector <int>  ar)
{
    int i,j,k,v;
    for(i=1; i<ar.size(); i++)
    {
        v = ar[i];
        j=i;
        while(ar[j-1]>v&&j>=1)
        {
            ar[j] = ar[j-1];
            j--;
		for(k=0;k<ar.size();k++)
                cout<<ar[k]<<" ";
            cout<<endl;
        }
        ar[j] = v;
        
    }
for(k=0;k<ar.size();k++)
                cout<<ar[k]<<" ";
            cout<<endl;
}
/* Tail starts here */
int main(void)
{
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++)
    {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }

    insertionSort(_ar);

    return 0;
}
