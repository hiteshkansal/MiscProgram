#include <vector>
#include <iostream>
using namespace std;

unsigned long long int cnt = 0;
int Sort(vector<int> A)
{
    int i=0;
    int sz = A.size()-1;
    vector<int> less,greater;
    if(sz<=1)
        return 1;
    less.push_back(0);
    greater.push_back(0);
    int pivot = A[(sz+1)/2];
    for(i=1;i<=sz;i++)
    {
        if(A[i]<pivot){
            less.push_back(A[i]);
        }
        else if(A[i]>pivot){
            greater.push_back(A[i]);
        }
    }
    Sort(less);
    Sort(greater);
    cnt += sz;
}

int main()
{
    unsigned long long int n;
    int a,i;
    vector<int> ar;
    cin>>n;
    ar.push_back(0);
    for(i=0;i<n;i++)
    {
        cin>>a;
        ar.push_back(a);
    }
    Sort(ar);
    cout<<cnt;
    return 0;
}
