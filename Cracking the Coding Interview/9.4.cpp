#include<iostream>
#include<vector>

using namespace std;
vector<int> subset(vector<int> arr, int x)
{
    vector<int> sbst;
    int in = 0;
    for(int k=x; k>0; k>>=1)
    {
        if(k&1==1)
            sbst.push_back(in);
        in++;
    }
    return sbst;
}

void allsubset(vector<int> arr)
{
    int n = arr.size();
    vector< vector<int> > res;
    vector<int> v;
    int mx = 1<<n;
    for(int i=0;i<mx;i++)
    {
        v = subset(arr,i);
        res.push_back(v);
    }

    for(int i=0;i<mx;i++)
    {
        int k  = res[i].size();
        for(int j=0;j<k;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
//    vec.push_back(4);
    allsubset(vec);
    return 0;
}
