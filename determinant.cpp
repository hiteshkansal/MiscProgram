#include<iostream>
#include<cmath>
using namespace std;
void read(int b[3][3],int m)
{
    cout<<"ENTER "<<m*m<<" ELEMENTS OF MATRIX(ROW-WISE):";
    for(int i=0; i<m; i++)
        for(int j=0; j<m; j++)
            cin>>b[i][j];
}

void print(int b[3][3],int m)
{
    cout<<"\nMATRIX IS :-\n";
    for(int i=0; i<m; i++)
    {
        cout<<"\n\t";
        for(int j=0; j<m; j++)
            cout<<"\t"<<b[i][j];
    }
}

int determinant(int b[3][3],int m)
{
    int i,j,sum = 0,c[3][3];
    if(m==2)
    {
        sum = b[0][0]*b[1][1] -
              b[0][1]*b[1][0];
        return sum;
    }
    for(int p=0; p<m; p++)
    {
        int h = 0,k = 0;
        for(i=1; i<m; i++)
        {
            for( j=0; j<m; j++)
            {
                if(j==p)
                    continue;
                c[h][k] = b[i][j];
                k++;
                if(k == m-1)
                {
                    h++;
                    k = 0;
                }
            }
        }
        sum = sum + b[0][p]*pow(-1,p) * determinant(c,m-1);
        cout<<sum<<endl;
    }
    return sum;
}

int main()
{
    int a[3][3],l,n;
    int result;
    n=3;
    read(a,n);
    result = determinant(a,n);
    print(a,n);
    cout<<"\n\tTHE DETERMINANT OFTHE ABOVE MATRIX IS:"<<result;
    return 0;
}
