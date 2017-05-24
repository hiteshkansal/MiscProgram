#include<stdio.h>

void print(int q[][3][4], int i, int j, int k)
{
    int a,b,c;
    //int *p;
    for(a=0;a<i;a++)
    {
        for(b=0;b<j;b++)
        {
      //      p=q[a][b];
            for(c=0;c<k;c++)
                printf("%d",q[a][b][c]);
            printf("\n");
        }
        printf("\n");
    }
}

int main()
{
    int a[][3][4]={{1,2,3,4,
                    5,6,7,8,
                    9,1,2,3},
                    {2,3,4,5,
                    6,7,8,9,
                    5,0,3,6}};
    print(a,2,3,4);
    return 0;
}
