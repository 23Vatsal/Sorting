#include<stdio.h>
#define max 1000

void selection_sort(int arr[],int n)
{
  int i,j,min,tmp;
  for(i=0;i<n-1;i++)
  {
    min=i;
    for(j=i+1;j<n;j++)
    {
      if(arr[min]>arr[j])
        min=j;
    }
    if(min!=i)
    {
      tmp=arr[i];
      arr[i]=arr[min];
      arr[min]=tmp;
    }
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
  selection_sort(arr,n);
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
