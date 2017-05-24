#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int beer = 10000;
pthread_mutex_t a_lock = PTHREAD_MUTEX_INITIALIZER;
void* fun1()
{
    int i;
    for(i = 0; i<1000;i++)
    {
        pthread_mutex_lock(&a_lock);
        beer = beer-1;
        pthread_mutex_unlock(&a_lock);
    }
    return NULL;
}

int main()
{
    pthread_t t1[10];
    int i;
    for(i=0;i<10;i++)
    {
        if(pthread_create(&t1[i], NULL, fun1, NULL) == -1)
            printf("Cant create t1\n");
    }

    void *result;
    for(i=0;i<10;i++)
    {
        if(pthread_join(t1[i], &result) == -1)
            printf("Cant join t1\n");
    }
    printf("total beer left %d \n",beer);
    return 0;
}
