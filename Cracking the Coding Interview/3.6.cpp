#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> st1, st2;
    int v;
    srand(time(0));
    for(int i=0; i<5; i++)
    {
        int r = rand()%20+1;
        st2.push(r);
    }
    while(!st2.empty())
    {
        v = st2.top();
        st2.pop();
        if(!st1.empty())
        {
            while(!(st1.empty()) && st1.top()>v)
            {
                int r = st1.top();
                st1.pop();
                st2.push(r);
            }
            st1.push(v);
        }
        else
            st1.push(v);
    }
    while(!(st1.empty()))
    {
        cout<<st1.top()<<" ";
        st1.pop();
    }

    return 0;
}
