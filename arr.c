#include <stdio.h>

int main()
{
    /*
    int a[]={0,1,2,3,4};
    int *p[] = {a,a+2,a+1,a+4,a+3};
    int **ptr=p;
    **++ptr;
    printf("%d  %d  %d",**ptr,ptr-p,*ptr-a);
    //for(ptr=arr+4,i=0;i<5;i++)
      //  printf("%d   ",ptr[-i]);
//    printf("%u   %u  %u",arr,arr+1,&arr+2);
*/

int a[3][3][2] = { {1,2,3,4,5,6},{3,4,1,2,5,6},{5,6,3,4,1,2}};
printf("%d%d%d",*(*(a[0]+2)+1),*(*(*(a+2)+1)+1),*(a[1][2]+1));
    return 0;
}
