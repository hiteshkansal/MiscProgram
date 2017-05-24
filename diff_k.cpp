#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a[] = {3,2,4,6,8,9,13};
    int k = 4;
    int n = sizeof(a)/sizeof(a[0]);
    int i=0, j=1,cnt=0;
    sort(a,a+n);
    while(j<n)
    {
        if(abs(a[i]-a[j])==k)
            i++,j++,cnt++;
        else if(abs(a[i]-a[j])<k)
            j++;
        else
            i++;
    }
    cout<<cnt;
    return 0;
}
