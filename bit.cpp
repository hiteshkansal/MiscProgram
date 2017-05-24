#include<iostream>

using namespace std;
int main()
{
    int a;
    while(1)
    {
    cin>>a;
    int temp = 0, ntemp =a;
    while(ntemp)
    {
        temp = temp | (ntemp&1);
        ntemp= ntemp>>1;
        temp = temp<<1;
        cout<<temp<<" "<<ntemp<<endl;
    }
    temp = temp>>1;
    if(temp==a)
        cout<<"yes!!palindrome";
    else
        cout<<"no";
    }
    return 0;
}
