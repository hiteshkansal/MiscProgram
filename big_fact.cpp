#include<iostream>
#include<cstring>
using namespace std;
int mx = 10;

void display(int arr[])
{
    int ctr = 0;
    for (int i=0; i<mx; i++)
    {
        if (!ctr && arr[i])
            ctr = 1;
        if(ctr)
            cout<<arr[i];
    }
}

void factorial(int arr[])
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"factorial of "<<n<<" is :\n";
    arr[0]=arr[1]=0;
    if (!n) return;
    int carry = 0;
    for(int j=n; j>=1; j--)
    {
        carry=0;
        for (int i=mx-1; i>=0; --i)
        {
            arr[i] = (arr[i] * j) + carry;
            carry = arr[i]/10;
            arr[i] %= 10;
        }
    }
}

int main()
{
    int *a = new int[mx];
    a[mx-1] = 1;
    factorial(a);
    display(a);
    delete[] a;
    return 0;
}
