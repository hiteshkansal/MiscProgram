#include<iostream>
#include<stdlib.h>
#include<limits.h>
#define n 4

using namespace std;

typedef struct heap
{
    int element;
    int i;
    int j;
} heap;

class minheap
{
    heap *hr;
    int size;
public:
    minheap(heap[], int);
    void heapify(int);
    int left(int i)
    {
        int j = 2*i+1;
        if(j>size)
            return -1;
        return j;
    }
    int right(int i)
    {
        int j = 2*i+2;
        if(j>size)
            return -1;
        return j;

    }
    heap getmin()
    {
        return hr[0];
    }
    void replacemin(heap x)
    {
        hr[0] = x;
        heapify(0);
    }

    int max(int a, int b)
    {
        if(a<0)
            return b;
        if(b<0)
            return a;
        if(hr[a].element < hr[b].element)
            return a;
        else
            return b;
    }
};
minheap::minheap(heap h[], int sz)
{
    size = sz;
    hr = h;
    int i = (size-1)/2;
    while(i>=0)
    {
        heapify(i);
        i--;
    }
}
void minheap :: heapify(int i)
{
    if(i<0)
        return;
    int l,r,mx;
    l = left(i);
    r = right(i);
    mx = max(l,r);
    if(hr[mx].element < hr[i].element&&mx!=-1&&mx!=i)
    {
        heap temp = hr[mx];
        hr[mx] = hr[i];
        hr[i] = temp;
        heapify(mx);
    }
}

int * mergearr(int a[][n], int k)
{
    int *res = new int[n*k];
    heap *h= new heap[k];
    for(int r=0; r<k; r++)
    {
        h[r].element = a[r][0];
        h[r].i = r;
        h[r].j = 1;
    }
    minheap hp(h,k);
    for(int cnt =0; cnt<n*k; cnt++)
    {
        heap root = hp.getmin();
        res[cnt] = root.element;
        if(root.j < n)
        {
            root.element = a[root.i][root.j];
            root.j+=1;
        }
        else
            root.element = INT_MAX;
        hp.replacemin(root);
    }
    return res;
}
void printArray(int arr[], int size)
{
    for (int i=0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[][n] =  {{2, 6, 12, 34},
        {1, 9, 20, 1000},
        {23, 34, 90, 2000}
    };
    int k = sizeof(arr)/sizeof(arr[0]);

    int *output = mergearr(arr, k);
    cout << "Merged array is " << endl;
    printArray(output, n*k);
    return 0;
}
