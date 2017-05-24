#include<iostream>

using namespace std;

int partition1(char *a, int l, int h)
{
    char x = a[l];
    int left = l, right = h;
    while(left<right)
    {
        while(a[left]<=x)
            left++;
        while(a[right]>x)
            right--;
        if(left<right)
            swap(a[left],a[right]);
    }
    a[l] = a[right];
    a[right] = x;
    return right;
}

void quick(char *a, int l, int h)
{
    if(l<h)
    {
        int r = partition1(a,l,h);
        quick(a,l,r-1);
        quick(a,r+1,h);
    }
}

int main()
{
    char s1[] = "hitesh";
    char s2[] = "tehhsi";
    quick(s1,0,5);
    quick(s2,0,5);

    for(int i=0;i<6;i++)
    {
        if(s1[i]!=s2[i])
        {
            cout<<"Not.";
            return 0;
        }
    }
    cout<<"yes.";
    return 0;
}
