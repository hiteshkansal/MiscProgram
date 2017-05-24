#include<iostream>

using namespace std;
int main()
{
    /*
    int n,i,j,key;
    cout<<"enter no of element";
    cin>>n;
    int a[n];
    for(i=0; i<n;i++)
    cin>>a[i];
    for(i=1;i<n;i++)
    {
        key=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(key<a[j]){
                a[j+1] = a[j];
                a[j] = key;
            }
        }
    }
    for(i=0; i<n;i++)
    cout<<" "<<a[i];
    */
    int n;
    cout<<"Enter length of array";
    cin>>n;
    int a[n],b[n],c[n+1],i,carry=0,temp;

    cout<<"Enter 1st arrary element";
    for(i=0; i<n;i++)
    cin>>a[i];
    cout<<"\n";
    cout<<"Enter 2nd arrary element";
    for(i=0; i<n;i++)
    cin>>b[i];
    cout<<"\n";
    for(i=n-1;i>=0;i--)
    {
        if((a[i]==1 && b[i]==1) && !carry){
        c[i+1]=0;
        carry=1;
        }

        else if((a[i]==1 && b[i]==1) && carry){
        c[i+1]=1;
        carry=1;
        }

        else{
        c[i+1] = a[i] | b[i];
        c[i+1] = c[i+1] | carry;
        carry=0;
        }
    }
    c[0] = carry;
    cout<<" ";
    for(i=0;i<n;i++)
        cout<<a[i];
        cout<<endl;
        cout<<" ";
    for(i=0;i<n;i++)
        cout<<b[i];
        cout<<endl;
    for(i=0;i<n+1;i++)
        cout<<c[i];
    return 0;
}
