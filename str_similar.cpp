#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <stdio.h>

using namespace std;

int main()
{
    string word;
    int n,i,j,len;
    unsigned long long int cnt=0;
    cin>>n;
    while(n--)
    {
        cin>>word;
        i=0;
        j=1;
        len = word.size();
        cnt = len;
        for(int k=0;k<len;k++)
        {
            i=0;
            j = k+1;
            while(word[i]==word[j])
            {
                    j++;
                    i++;
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
