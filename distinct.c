#include<stdio.h>
#include<stdlib.h>
int Count[1024];

void CountingSort(int A[],int len)
{
	int i,j;
	for(i=0;i<len;i++)
	{
		Count[A[i]]=Count[A[i]]+1;
		if(Count[A[i]]==1)
		printf("%d",A[i]);
	}
}
int main()
{
	int n,i, A[100];
	printf("no of element in the array:");
	scanf("%d",&n);
	printf("enter the array element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	CountingSort(A,n);
}
