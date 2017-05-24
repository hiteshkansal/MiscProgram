#include<iostream>
using namespace std;
void revrse(char s[], char *p, char *q)
{
    if(*q>96 && *q<122)
        *q = *q-32;
    if(*p>64 && *p<92)
        *p = *p+32;
    swap(*p,*q);
    p++,q--;
    while(p<q)
    {
        if(*q>64 && *q<92)
            *q = *q+32;
        if(*p>64 && *p<92)
            *p = *p+32;
        swap(*p,*q);
        p++;
        q--;
    }
}

int main()
{
    char s1[] = "Hello WorLd hitEsh";
   /* char *r = s;
    int n=1;
    while(*s!='\0')
    {
        n++;
        s++;
    }
    char s1[n];
    int i=0;
    while(r[i]!='\0')
    {
        s1[i] = r[i];
        i++;
    }
    s1[i] = '\0';
    */
    char *p,*q;
    p=q=s1;
    while(*q!='\0')
    {
        if(*(q+1)==' ' || *(q+1)=='\0')
        {
            revrse(s1,p,q);
            if(*(q+1)=='\0')
                break;
            q=q+2;
            p=q;
        }
        else
            q++;
    }
    cout<<s1;
    return 0;
}
