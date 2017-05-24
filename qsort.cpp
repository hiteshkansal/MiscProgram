#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int compare(const void* a, const void *b)
{
   return *(char*)a - *(char*)b;
}

int main()
{
    //int a[] = {10,4,8,2,6,5};
    char arr[][10] = {"hello", "jiho", "cat"};
   // char *a = new char[5];
   // strcpy(a,"hello");
    for(int i=0;i<3;i++)
        qsort(arr[i],strlen(arr[i]),sizeof(char),compare);

    qsort(arr,3,sizeof(arr[0]),compare);
   // qsort(a,strlen(a),sizeof(char),compare);
//    cout<<a;
    for(int i=0;i<3;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
