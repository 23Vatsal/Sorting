#include<stdio.h>
#define max 1000

void merge(int arr[],int tmp[],int low1,int up1,int low2,int up2)
{
  int i,j,k;
  i=low1,j=low2,k=low1;
  while(i<=up1&&j<=up2)
  {
    if(arr[i]<arr[j])
      tmp[k++]=arr[i++];
    else if(arr[i]>arr[j])
      tmp[k++]=arr[j++];
    else
    {
        tmp[k++]=arr[i++];
        j++;
    }
  }
  while(i<=up1)
    tmp[k++]=arr[i++];
  while(j<=up2)
    tmp[k++]=arr[j++];
}

void copy(int arr[],int tmp[],int low,int up)
{
  int i;
  for(i=low;i<=up;i++)
    arr[i]=tmp[i];
}

void merge_sort(int arr[],int low,int up)
{
  int mid;
  int tmp[max];
  if(low<up)
  {
    mid=(low+up)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,up);
    merge(arr,tmp,low,mid,mid+1,up);
    copy(arr,tmp,low,up);
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
  printf("sorted array\n");
  merge_sort(arr,0,n-1);
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
