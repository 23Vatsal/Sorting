#include<stdio.h>
#define max 1000

int partition(int arr[],int low,int up)
{
  int tmp,i,j,pivot;
  pivot=arr[low];
  i=low+1;
  j=up;
  while(i<=j)
  {
    while(arr[i]<pivot&&i<up)
      i++;
    while(arr[j]>pivot)
      j--;
    if(i<j)
    {
      tmp=arr[i];
      arr[i]=arr[j];
      arr[j]=tmp;
      i++;
      j--;
    }
    else
      i++;
  }
  arr[low]=arr[j];
  arr[j]=pivot;
  return j;
}

void quick_sort(int arr[],int low,int up)
{
  int pivloc;
  if(low>=up)
    return;
  pivloc=partition(arr,low,up);
  quick_sort(arr,low,pivloc-1);
  quick_sort(arr,pivloc+1,up);
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
  printf("sorted array\n");
  quick_sort(arr,0,n-1);
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
