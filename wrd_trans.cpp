#include<iostream>
#include<sstream>
#include<map>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    map<string, string> m;
    string key, value;
    ifstream f;
    f.open("wrd.txt");
    if(!f)
    {
        cerr<<"couldn't open";
        return -1;
    }

    while(f>>key>>value)
        m.insert(make_pair(key,value));

    ifstream input;
    input.open("input.txt");

    if(!input)
    {
        cerr<<"couldn't open";
        return -1;
    }

    string line;
    while(getline(input,line))
    {
        istringstream stream(line);
        string word;
        bool fw = true;
        while(stream >> word)
        {
            map<string, string> :: const_iterator it = m.find(word);
            if(it!=m.end())
                word = it->second;
            if(fw)
                fw = false;
            else
                cout<<" ";
            cout<<word;
        }
        cout<<endl;
    }

    return 0;
}
