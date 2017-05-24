#include<iostream>
using namespace std;

class a
{
    public:
    a()
    {
        cout<<("Base const ");
    }
    void show()
    {
        cout<<("Base show ");
    }
};

class b :public a
{
    public:
    b()
    {
        cout<<("derived const ");
    }
    void show()
    {
        cout<<("derived show ");
    }
};

class c :public b
{
    public:
    c()
    {
        cout<<("derived2 const ");
    }
    void show()
    {
        cout<<("derived2 show ");
    }
};
int main()
{
    a *obj = new c();
    obj->show();
    return 0;
}
