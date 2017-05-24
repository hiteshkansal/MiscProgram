#include<iostream>
using namespace std;

int main()
{
    char s1[] = "abcndsbhdB";
    char s2[] = "bad";
    int i,j,k=0,n = 0;
    bool flag = false;
    for(i=0;i<sizeof(s1);i++)
    {
        flag = false;
        for(j=0;j<sizeof(s2);j++)
        {
            if(s1[i]==s2[j]){
              flag = true;
              break;
            }
        }
        if(!flag)
        {
            s1[k] = s1[i];
            k++;
        }
    }
    s1[k] = '\0';
    cout<<s1;
    return 0;
}
