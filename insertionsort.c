#include<stdio.h>
#define max 1000

void insertion_sort(int arr[],int n)
{
  int i,j,k;
  for(i=1;i<n;i++)
  {
    k=arr[i];
    for(j=i-1;j>=0&&k<arr[j];j--)
    {
      arr[j+1]=arr[j];
    }
    arr[j+1]=k;
  }
}

int main()
{
  int n,i;
  int arr[max];
  printf("enter no of nodes\n");
  scanf("%d",&n);
  printf("enter elements of array\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("sorted array\n");
  insertion_sort(arr,n);
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
