#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int hsh[256] = {0};
    char s[] = "cjdfaAbabj0023!rtR!";
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>64 && s[i]<91)
            hsh[s[i]+32]++;
        else
            hsh[s[i]]++;
    }

    for(i=0;i<256;i++)
    {
        if(hsh[i]>1)
        cout<<(char)i<<"  "<<hsh[i]<<endl;
    }
    return 0;
}
