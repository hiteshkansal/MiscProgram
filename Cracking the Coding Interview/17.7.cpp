#include<iostream>
#include<string.h>
using namespace std;

string digit[] = {"One","Two", "Three","Four","Five","Six","Seven","Eight","Nine"};
string teens[] = {"Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
string tens[] = {"Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Nintey"};
string big[] = {"","Thousond","Million","Billion"};

string numtos(int n)
{
    string str = "";
    if(n>100)
    {
        str+=digit[(n/100)-1]+" Hundred ";
        n%=100;
    }

    if(n>10 && n<20)
    {
        str+=teens[(n/10)-1]+" ";
        return str;
    }
    else if(n==10 || n>=20)
    {
        str+=tens[(n/10)-1]+" ";
        n%=10;
    }
    if(n>0&&n<10)
        str+=digit[n-1]+" ";
    return str;
}

int main()
{
    int n;
    cin>>n;
    string str = "";
    if(n==0)
    {
        cout<<"Zero";
    return 0;
    }
    else if(n<0)
    {
        str+="Negative";
    }
    int c=0;
    while(n>0)
    {
        if(n%1000!=0)
            str= numtos(n%1000)+" "+big[c]+" "+str;
        n/=1000;
        c++;
    }
    cout<<str;
    return 0;
}
