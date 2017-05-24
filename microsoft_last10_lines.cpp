#include<iostream>

using namespace std;

char *strrchr(char *str, char c)
{
    char *pos = NULL;
    do
    {
        if(*str==c)
            pos = str;
    }while(*str++);
    return pos;
}

void print_last_lines(char str[], int n)
{
    if(n<=0)
        return;
    int cnt = 0;
    char *pos = NULL;
    pos = strrchr(str,'\n');
    if(pos==NULL)
    {
        cout<<"No \\n.";
        return;
    }
    while(cnt<n)
    {
        while(str<pos && *pos!='\n')
            pos--;
        if(*pos=='\n')
            pos--,cnt++;
        else
            break;
    }
    if(str<pos)
        pos+=2;
    cout<<pos;
}

int main()
{
    int i=2;

    char *str1 = "str1\nstr2\nstr3\nstr4\nstr5\nstr6\nstr7\nstr8\nstr9"
                 "\nstr10\nstr11\nstr12\nstr13\nstr14\nstr15\nstr16\nstr17"
                 "\nstr18\nstr19\nstr20\nstr21\nstr22\nstr23\nstr24\nstr25";
    char *str2 = "str1\nstr2\nstr3\nstr4\nstr5\nstr6\nstr7";
    char *str3 = "\n";
    char *str4 = "";

    print_last_lines(str1, 10);
    cout<<"-----------------\n";
    print_last_lines(str2, 10);
    cout<<"-----------------\n";

    print_last_lines(str3, 10);
    cout<<"-----------------\n";

    print_last_lines(str4, 10);
    cout<<"-----------------\n";
    return 0;
}
