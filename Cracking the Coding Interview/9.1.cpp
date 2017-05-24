#include<iostream>
int *arr;
using namespace std;
// Recursion Sol-- O(3^n)
int count_way(int n)
{
    if(n<0)
        return 0;
    else if(n==0)
        return 1;
    else
        return count_way(n-1)+count_way(n-2)+count_way(n-3);
}

// Dynamic Programming Sol-- O(n)
int count_DP(int n)
{
    if(n<0)
        return 0;
    else if(n==0)
        return 1;
    else if(arr[n]>-1)
        return arr[n];
    else
        arr[n] = count_way(n-1)+count_way(n-2)+count_way(n-3);

    return arr[n];
}
int main()
{
    int n=10;
    arr = new int[n+1];
    for(int i=0;i<=n;i++)
        arr[i] = -1;
    cout<<count_way(n)<<endl;
    cout<<count_DP(n)<<endl;
    return 0;
}
