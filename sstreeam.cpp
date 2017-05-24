#include<iostream>
#include<sstream>

using namespace std;

int main()
{
/*    string line,word;
    while(getline(cin,line))
    {
        istringstream in(line);
        while(in>>word)
        cout<<word<<endl;
    }
*/
    int a=34,b=45;
    string s;
    ostringstream out;

    out<<"a=: "<<a<<"b=: "<<b<<endl;
    istringstream i(out.str());
    i>>s>>a>>s>>b;
    cout<<a<<b;

    return 0;
}
