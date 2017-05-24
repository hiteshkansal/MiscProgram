#include<iostream>
#include<stdlib.h>

using namespace std;
/*int cnt = 0;
int palin(int n)
{
    if(n==0)
        return n;
    int rem;
    rem=n%10;
    n = palin(n/10);
    cnt++;
    for(int i=1;i<cnt;i++)
        rem*=10;
    return (n+rem);
}
*/
int palin(int n, int*dup)
{
    if(n>0 && n<10)
        return (n==(*dup)%10);
    if(!palin(n/10,dup))
        return 0;
    *dup/=10;
    return (*dup%10==n%10);
}
int main()
{
    int n,k;
    cout<<"Enter no.";
    cin>>n;
    //k=palin(n);
    //if(k==n)
    if(palin(n,&n))
        cout<<"No. is palindrome";
    else
        cout<<"Not palindrome";
    return 0;
}
