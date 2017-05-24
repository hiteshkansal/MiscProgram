#include<iostream>
using namespace std;

int main()
{
cout<<sizeof(cin)<<" "<<cin.fail()<<endl;
bool x;
cin>>x;
//cout<<"\n"<<sizeof(cin)<<" "<<cin.fail()<<" "<<sizeof(cin.get());
if(cin.get()==-1)
if(!cin)
cout<<"Haha"<<endl;
}
