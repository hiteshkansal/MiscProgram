#include<iostream>
#include<string.h>

using namespace std;

bool matching(char x[], char y[])
{
    if(*x=='\0' && *y =='\0')
        return true;
    if(*x=='?' || *x==*y)
        return matching(x+1,y+1);
    if(*x=='*' && *(x+1)!='\0' && *y == '\0')
        return false;
    if(*x=='*')
        return matching(x,y+1) || matching(x+1,y);
    return false;
}

/*
bool matching(char x[], char y[])
{
    int i=0, j=0,k=-1;
    int n = strlen(y);
    while(x[i]!='\0' && y[j]!='\0')
    {
        if(x[i]=='?')
        {
            i++,j++;
            continue;
        }
        if(k>-1 && x[i]!=y[j] && x[i]!='*')
            i=k;
        if(x[i]=='*')
        {
            k=i;
            while(y[j]!=x[i+1] && y[j]!='\0')
                j++;
            i++;
        }
        if(k==-1 && x[i]!=y[j])
            return false;
        if(x[i]==y[j])
            i++,j++;
        if(x[i]=='\0' && k>-1 && x[i-1]==y[n-1])
            return true;

    }
    if(x[i]=='\0' && y[j]=='\0')
        return true;
    else
        return false;
}
*/
int main()
{
    char x[] = "*?c*d";
    char y[] = "abccd";
    if(matching(x,y))
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
