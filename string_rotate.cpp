#include<iostream>
#include<string.h>
#include<limits.h>
using namespace std;

int main()
{
    /*
    char s[] = "hitesh";
    int len = strlen(s);
    int d=3,i,k=0;

    while(k<d)
    {
        i=d;
        char temp = s[len-d+k];
        while((len-i)>0)
        {
            int temp2 = len-i+k;
            s[temp2] = s[temp2-d];
            i+=d;
        }
        s[len-i+k] = temp;
        k++;
    }*/

    string s = "hitesh";
    int len = s.size();

    int i=0,lst=len-1,m=INT_MIN,lm=0,ind;

    while(i!=lst)
    {
        if(s[lst]<s[i])
        {
            lm++;
            if(lm>m)
            {
                ind = lst;
                m=lm;
            }
        }
        else
            lm=0;
        lst--;
    }
    int d=len-ind,k=d;
    string temp = "";
    while(d)
    {
        temp+=s[len-d];
        d--;
    }
    temp.append(s.begin(),s.end()-k);
  /*  int j=0;
    while(j<len-k)
        temp+=s[j++];
  */
    s = temp;
    cout<<s;
    return 0;
}
