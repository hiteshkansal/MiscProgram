#include<iostream>

using namespace std;

void shift(int *a[], int r, int c)
{
    while(r>0)
    {
        a[r][c] = a[r-1][c];
        r--;
    }
    a[r][c] =0;
}

void matrix(int *a[])
{
    int x,y;
    cout<<"Enter 2 co-ordinates ";
    cin>>x>>y;
    int temp = a[x][y];

    if(a[x][y-1] == temp)
    {
        shift(a,x,y-1);
    }
    if(a[x][y+1] == temp)
    {
        shift(a,x,y+1);
    }

    if(a[x-1][y] == temp)
    {
        shift(a,x-1,y);
    }
    shift(a,x,y);
    if(a[x+1][y] == temp)
    {
        shift(a,x+1,y);
    }
}

int main()
{
/*
4 4
1 2 3 4
5 6 7 8
9 7 7 7
2 3 7 5
    */
    int **a;
    int m,n;
    cin>>m>>n;

    a = new int*[m];
    for(int i=0; i<m; i++)
        a[i] = new int[n];

    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];

    matrix(a);

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
