#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    const int k=10;
    string l[k];
    ifstream f("13.1.txt");
    int sz=0;
    while(f.good())
    {
        getline(f,l[sz%k]);
        sz++;
    }
    int start = sz>k?(sz%k):0;
    int cnt = min(sz,k);
    for(int i=0;i<cnt;i++)
        cout<<l[(start+i)%k]<<endl;
    return 0;
}
