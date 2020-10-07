#include<stdio.h>
#define max 1000

void shell_sort(int arr[],int n,int incr)
{
  int i,j,k;
  while(incr>=1)
  {
    for(i=incr;i<n;i++)
    {
      k=arr[i];
      for(j=i-incr;j>=0&&k<arr[j];j-=incr)
      {
        arr[j+incr]=arr[j];
      }
      arr[j+incr]=k;
    }
    incr-=2;
  }
}

int main()
{
  int n,i,incr;
  int arr[max];
  printf("enter no of nodes\n");
  scanf("%d",&n);
  printf("enter elements of array\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("enter increment\n");
  scanf("%d",&incr);
  printf("sorted array\n");
  shell_sort(arr,n,incr);
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
