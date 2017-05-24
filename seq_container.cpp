#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream
#include<vector>
#include<list>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
    list<int>:: iterator i;
    list<int> s;
    for(size_t i1=0; i1<6; i1++)
        s.push_back(i1);
    for(size_t i1=0; i1<6; i1++)
        s.push_front(i1);
    //s.resize(5,0);
//    cout<<"Size is: "<<s.size()<<endl;
    //s.clear();

    /*cout<<"size: "<<s.size()<<"Capacity: "<<s.capacity();
    s.reserve(50);
    for(size_t i1=0; i1<45; i1++)
        s.push_back(i1);
         cout<<"size: "<<s.size()<<"Capacity: "<<s.capacity();
         */
    //cout<<"find: "<<*(find(s.begin(),s.end(),2))<<endl;
    //cout<<s[2]; //error:no random access in list.
    list<int> s1(s.begin(),s.end());
    for(i=s1.begin(); i!=s1.end(); i++)
        cout<<*i<<endl;
    //cout<<s.max_size();
    /* int a[4]={1,4,6,45};
     string sa[] = {"hitesh","kansal","hello","ji"};
    //   cout<<sizeof(sa);
     vector<string> s(sa,sa+6);
     vector<int> i(a,a+4);
     list<int> li(a+1,a+3);
     //cout<<i[2];
     */

    /*
      stringstream ss;
      ss << "100" << ' ' << "200";
      int foo,bar;
       ss >> foo >> bar;
        cout << "foo: " << foo << '\n';
      cout << "bar: " << bar << '\n';
    */

    return 0;
}
