#include<iostream>
#include<stdexcept>

using namespace std;

int main()
{
    int a,b;
    while(1)
    {
        cout<<"Enter a: ";
        cin>>a;
        try
        {
            cout<<"Enter b: ";
            cin>>b;
            if(b==0)
                throw runtime_error("enter non zero b");
            else
                cout<<a/b<<endl;
        }
        catch(runtime_error e)
        {
            cout<<e.what()<<endl;
            continue;
        }
        cout<<"u want more: ";
        char c;
        if (cin>>c &&c=='n')
            break;
    }
    return 0;
}
