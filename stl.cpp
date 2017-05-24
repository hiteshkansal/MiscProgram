#include<iostream>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    int i;
    vector <int> vec, dest;
    vector<int> :: iterator it;
    for(int i=0; i<10; i++)
        vec.push_back(i);
    vec.push_back(4);
    vec[7] =4;
    vec.push_back(4);
    //vec[10] = 4;

    //replace(vec.begin(), vec.end(), 4,10);

    replace_copy(vec.begin(), vec.end(),back_inserter(dest), 4, 14);

    for(it=vec.begin(), i=0; it!=vec.end(); i++, it++)
        cout<<vec[i]<<" ";

    cout<<endl;
    vector<int> vec1;
    fill_n(back_inserter(vec1),20,10);

    copy(vec1.begin(), vec1.end(),back_inserter(dest));

    for(int i=0; i<20; i++)
        cout<<dest[i]<<" ";

    return 0;
}
