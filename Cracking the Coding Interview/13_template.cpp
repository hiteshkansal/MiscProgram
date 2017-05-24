#include<iostream>
using namespace std;

template<class T> class hello
{
    T *ar;
    int offset, sz;
public:
    hello(int s) : offset(0), sz(s)
    {
        ar = new T[sz];
    }
    ~hello()
    {
        delete []ar;
    }
    void shift(int n)
    {
        offset = (offset+n)%sz;
    }
    T get(int i)
    {
        return ar[convert(i)];
    }
    void set(int i, T item)
    {
        ar[convert(i)] = item;
    }
private:
    int convert(int i)
    {
        int index = (i-offset)%sz;
        while(index<0)
            index+=sz;
        return index;
    }
};

int main()
{
    hello<char> *h = new hello<char>(4);
    //for(int i=0;i<4;i++)
        h->set(0,'a');
        h->set(1,'b');
        h->set(2,'c');
        h->set(3,'d');
    cout<<h->get(0)<<endl;
    cout<<h->get(1)<<endl;
    h->shift(1);
    cout<<h->get(0)<<endl;
    cout<<h->get(1)<<endl;
    delete h;
    return 0;
}
