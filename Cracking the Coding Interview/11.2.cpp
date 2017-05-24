#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<set>
using namespace std;

int comp(const void *a,const void *b)
{
    return *(char*)a - *(char*)b;
}

int main()
{
    char s[][10] = {"hitesh","hello","teshih","ollhe","hsheit"};

    for(int i=0;i<5;i++)
        qsort(s[i],strlen(s[i]),sizeof(char),comp);
    //qsort(s,5,sizeof(s[0]),comp);

    multiset<char*> st;
    for(int i=0;i<5;i++)
        st.insert(s[i]);
    auto it = st.begin();
    for(int i=0;i<5;i++,it++)
        cout<<*it<<" ";
    return 0;
}
