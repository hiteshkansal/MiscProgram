#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string s;
    ifstream in("in.txt");
    ofstream out("out.txt");
    fstream io("io.txt");
    //in.open("in.txt");
    if(!io||!in||!out)
    {
        cerr<<"unable to open file.";
        return -1;
    }

    while(in>>s){
    out<<s<<endl;
    //io<<s<<endl;
    }
    //io>>s;
    //cout<<s;
    return 0;
}
