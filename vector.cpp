#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int a,n=5,i=0;
    vector<int> v1,v2;
    vector<int> :: iterator itr;
    vector<int> :: iterator itr1;

    for(int i=0;i<n;i++)
    {
    cin>>a;
    v1.push_back(a);
    }

    itr= v1.begin()+2;
    itr1= v1.begin();

    cout<<itr-itr1<<endl;

    for(itr=v1.begin();itr!=v1.end();itr++)
    *itr=i;

    v2=v1;
    for(int i=0;i<n;i++)
    cout<<v2[i]<<" "<<v1[i]<<endl;

  /*  while(cin>>a){
    v1.push_back(a);
    cout<<v1[i]<<endl;
    i++;
    }
    */
    return 0;
}
