#include<iostream>
#include<map>
#include<string>
#include<stdio.h>

using namespace std;

int main()
{

    map<string, int> m;
    m["hitesh"] = 1;
    m["kansal"] = 2;
    m["kansal"] = 3;
//    m++;
    map<string, int> :: iterator i = m.begin();
    i->second = 4;
    //cout<<m["kansal"]<<endl;
    m["kansal"]++;
    ++i;
//    m.insert(map<string,int> :: value_type("hello",1));
    m.insert(make_pair("hi",12));
    //i++;
   // m[0]=7;
   cout<<m.count("kansal")<<endl;   //print whether key is present or not
   cout<<m["hello"]<<" ";
    cout<<m["kansal"]<<endl;
    m["zasa"] = 1545;
    i++;
   // i= m.find("hello");
    while(i!=m.end()){
    cout<<endl<<i->first<<" ";
    cout<<i->second;
    i++;
    }

   /* map<string, int> wc;
    string word;
    while(cin>>word)
    {
            ++wc[word];
            if(word == "NULL")
                break;
    }
    map<string, int> :: iterator i = wc.begin();
    while(i!=wc.end())
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    */
    return 0;
}

