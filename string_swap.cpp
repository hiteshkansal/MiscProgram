#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[] = "a1b2c3d4e5";
    int al =2;
    int next = 4;
    int num = 1;
    int n = strlen(s);
    while(al<n && num<al)
    {
        char temp;
        temp = s[al-1];
        s[al-1] = s[al];
        s[al] = temp;
        al--;
        if(al == num)
        {
            num++;
            al = next;
            next+=2;
        }
    }
    cout<<s;
    return 0;
}
