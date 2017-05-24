#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void* fun1(int a)
{
    int i;
    for(i = 0; i<5;i++)
    {
        sleep(1);
        printf("hello t1\n");
    }
}

void* fun2()
{
    int i;
    for(i = 0; i<5;i++)
    {
        sleep(2);
        printf("hello t2\n");
    }
}

int main()
{
    pthread_t t1, t2;
    if(pthread_create(&t1, NULL, fun1, NULL) == -1)
        printf("Cant create t1\n");
    if(pthread_create(&t2, NULL, fun2, NULL) == -1)
        printf("Cant create t2\n");

    void *result;
    if(pthread_join(t1, &result) == -1)
        printf("Cant join t1\n");
    if(pthread_join(t2, &result) == -1)
        printf("Cant join t2\n");
    return 0;
}
