#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <stdio.h>

using namespace std;

int main()
{
    string line,word;
    vector<string> vec;
    string :: size_type pos = 0 ;
    int n,i,n1,t,cnt=0,len,len2;
    char *s = new char[2];
    gets(s);//,sizeof(char*),stdin);
    n = atoi(s);
    n1=n;
    while(n--)
    {
        cin.clear();
        getline(cin,line);
        vec.push_back(line);
    }
    gets(s);//,sizeof(char*),stdin);
    t = atoi(s);
    cin.clear();
    while(t--)
    {
        pos = 0;
        cnt = 0;
        getline(cin,word);
        for(i=0; i<n1; i++)
        {
            line = vec[i];
            pos = 0;
            while((pos = line.find(word,pos))!=string :: npos)
            {
                len = word.size();
                if((pos == 0) && (line[len]!='_') && (!isalpha(line[len])) && (!isdigit(line[len])))
                {
                    cnt++;
                    ++pos;
                    continue;
                }
                len += pos;
                len2 = (pos-1);
                if((line[len]!='_') && (!isalpha(line[len])) && (!isdigit(line[len]))&&(line[len2]!='_') && (!isalpha(line[len2])) && (!isdigit(line[len2])))
                    cnt++;
                ++pos;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}
