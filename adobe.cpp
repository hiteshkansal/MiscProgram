#include<iostream>

using namespace std;

int main()
{
   // int a[3][3][2] = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18}};
//    cout<<*(a[1][1]+1);
    char *p1 = "the world is", *p2;
    p2 = p1;
    p1 = "beautiful";
    cout<<p1<<p2;
    return 0;
}
