#include<iostream>
#include<string.h>
using namespace std;

void snake(int a[][5], int m, int n)
{
    int aux[m][n],temp1, temp2;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            aux[i][j]=1;
    }
    for(int i=m-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(i==m-1 && j==n-1)
                continue;
            if(i==m-1)    //cannot see below
            {
                if(abs(a[i][j]-a[i][j+1])==1)
                    aux[i][j] = aux[i][j+1]+1;
                    continue;
            }
            if(j==n-1)    //cannot see right
            {
                if(abs(a[i][j]-a[i+1][j])==1)
                    aux[i][j] = aux[i+1][j]+1;
                    continue;
            }
            temp1 = abs(a[i][j] - a[i][j+1]);    //For right
            temp2 = abs(a[i][j] - a[i+1][j]);    //For below
            if(temp1==1 && temp2==1)
            {
                aux[i][j] = max(aux[i][j+1], aux[i+1][j])+1;
            }
            else if(temp1==1)
                aux[i][j] = aux[i][j+1]+1;

            else if(temp2==1)
                aux[i][j] = aux[i+1][j]+1;
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<aux[i][j]<<" ";
        cout<<endl;
    }

    int mx = aux[0][0],k,l;
    for(int i=0;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(mx <= aux[i][j])
            {
                k=i,l=j;
                mx = aux[i][j];
            }
        }
    }
    cout<<a[k][l]<<" ";
    for(int i=0;i<m*n;i++)
    {
        temp1 = abs(aux[k][l] - aux[k][l+1]);
        temp2 = abs(aux[k][l] - aux[k+1][l]);
        if(temp1==1)
        {
            l++;
            cout<<a[k][l]<<" ";
        }
        else if(temp2==1)
        {
            k++;
            cout<<a[k][l]<<" ";
        }
    }

}

int main()
{
//    int arr[][5] = { { 1, 3, 2, 6, 8 }, { -9, 7, 1, -1, 2 }, { 1, 5, 0, 1, 9 } };
    int arr[][5] = { { 1, 3, 4, 5, 6 }, { 0, 2, 0, 3, 5 }, { 6,1,0,1,2} };

    snake(arr,3,5);
    return 0;
}
