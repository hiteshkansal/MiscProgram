#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    int i=023;
    int k=077;
    cout<<"Octal addition: "<<oct<<(i+k)<<endl;
    cout<<"Hexa value: "<<hex<<i<<endl;
    cout<<"dec value: "<<dec<<i<<endl;
    int j=45;
    cout<<"Hexa value: "<<hex<<j<<endl;
    cout<<"oct value: "<<oct<<j<<endl;
    bitset<16> b=i;
    cout<<"binary value: "<<b<<endl;
    b=j;
    cout<<"binary value: "<<b<<endl;
    return 0;
}
