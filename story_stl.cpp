#include<iostream>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>
#include<fstream>

using namespace std;

bool isshrt(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

bool gt6(const string &s1)
{
    return (s1.size()>=6);
}

int main()
{
    int i;
    string word;
    vector <string> vec;
    vector<string> :: iterator it,endu;
    ifstream in("story.txt");
    while(in>>word)
    {
        vec.push_back(word);
    }

    sort(vec.begin(), vec.end());

    endu = unique(vec.begin(), vec.end());

    vec.erase(endu, vec.end());
    stable_sort(vec.begin(), vec.end(), isshrt);
    vector<string> :: size_type wc = count_if(vec.begin(), vec.end(), gt6);
    if(wc == 1)
    cout<<wc<<" word"<<endl;
    else
    cout<<wc<<" words"<<endl;

    for(it = vec.begin();it!=vec.end(); it++)
        cout<<*it<<" ";

    return 0;
}
