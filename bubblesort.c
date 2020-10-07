#include<stdio.h>
#define max 1000

void bubble_sort(int arr[],int n)
{
  int i,j,swap,tmp;
  for(i=0;i<n-1;i++)
  {
    swap=0;
    for(j=0;j<n-1-i;j++)
    {
      if(arr[j]>arr[j+1])
      {
        tmp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=tmp;
        swap++;
      }
    }
    if(swap==0)
      return;
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
  bubble_sort(arr,n);
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
