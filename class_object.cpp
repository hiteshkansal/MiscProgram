#include<iostream>
#include<stdlib.h>

using namespace std;

class sample
{
    static int i;
public:
    sample();
};
int sample::i=0;
sample::sample()
{
    if(i==1)
    {
        exit(0);
        cout<<"exit";
    }
    cout<<"hello"<<endl;
    i++;
}

int main()
{
    sample s1;
    sample s2;
    return 0;
}
