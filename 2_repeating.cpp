#include<iostream>
using namespace std;

void nonRepeating(int arr[], int n)
{
  int xo = arr[0]; // Will hold xor of all elements
  int set_bit; // Will have only single set bit of xor
  int i;
  int x = 0;
  int y = 0;

  //Get the xor of all elements
  for(i = 1; i < n; i++)
   xo ^= arr[i];

  //Get the rightmost set bit in set_bit_no
  set_bit = xo & ~(xo-1);

  //Partition elements in two sets by ANDing with set_bit
  for(i = 0; i < n; i++)
  {
    if(arr[i] & set_bit)
     x = x ^ arr[i]; // XOR of first set
    else
     y = y ^ arr[i]; // XOR of second set
  }
  cout<<x<<" "<<y;
}
int main()
{
    int arr[] = {1,2,3,4,2,3,5};
    nonRepeating(arr,7);
    return 0;
}
