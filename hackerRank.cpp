#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,count,len;
    string line,word;
    string temp = "hackerrank";
    int flag=-1;
    char *s = new char[2];
    gets(s);
    n = atoi(s);
    while(n--)
    {

        string:: size_type pos = 0;
        count =0;

        getline(cin,line);
        flag = -1;
        stringstream stream(line);
        while(stream>>word)
        {
            count++;
            if(!(word.size()<=20))
                return 0;
        }
        if(!(count<=100))
            return 0;
        len = line.size()-10;
        if(line.find("hackerrank")==0)
            flag = 1;
        if(line.find("hackerrank")==len)
            flag = 2;
        if(line.find("hackerrank")==0 && line.compare(len,10,temp)==0)
            flag = 0;
        cout<<flag<<endl;
    }
    return 0;
}
