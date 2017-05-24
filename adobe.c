#include<stdio.h>


int main()
{
   // int a[3][3][2] = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18}};
//    cout<<*(a[1][1]+1);
/*    char *p1 = "the world is", *p2;
    p2 = p1;
    p1 = "beautiful";
    printf("%s %s",p1,p2);

    void fun();
    fun();

    printf("\n");
    char *s[] = {"hell","dsfs"};
    char **ptr[] = {s+1,s};
    char ***p = ptr;
    return 0;
    */

    union A{
        long int y[5];
        union B{
            double g;
            union C
            {
                int k;
                union D
                {
                    char ch;
                    int x[5];
                }s;
            }a;
        }b;
}*p;
p = (union A*)malloc(sizeof(union A));
p->b.a.k = 15;
printf("%d %d", p->b.a.s.x[0], p->y[0]);
/*
void fun()
{
    char c;
    if((c=getchar())!='\n')
        fun();
    printf("%c",c);
}
*/
return 0;
}
