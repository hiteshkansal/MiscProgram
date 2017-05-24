#include <stdio.h>

void display(int s)
{
    printf("hello");
    return s;
}

int cmp(const void *a, const void *b)
{
    char **x = (char **)a;
    char **y = (char **)b;
    return (strcmp(*x, *y));
}

int main()
{
    char *a[]={"dsfsdf","dsfsdfa","retert","vashj","trewb"};
    int n;
    for( n = 0 ; n < 5; n++ ) {
      printf("%s ", a[n]);
    }
    printf("\n");
    qsort(a,5,sizeof(char*),cmp);

    for( n = 0 ; n < 5; n++ ) {
      printf("%s    ", a[n]);
    }
    //void (*fun)(int);
    //printf("%d\n%d",sizeof(long),sizeof(void *));
    //fun=display;
    //fun(4);
    return 0;
}
