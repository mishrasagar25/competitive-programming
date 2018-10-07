#include<stdio.h>
#include<conio.h>
#define max 20

int a[max];

void merge(int low ,int mid , int high);
void merge_sort(int low , int high)
{
  int mid;
  if(low != high)
  {
    mid = (low + high)/2;
    merge_sort(low,mid);
    merge_sort(mid+1,high);
    merge(low , mid ,high);
  }
}

void merge(int low ,int mid , int high)
{
 int temp[max];
 int i,j,k;
 i = k = low;
 j = mid+1;
 while((i<=mid) && (j<=high))
 {
   if(a[i] <= a[j])
	temp[k++] = a[i++];
   else
	temp[k++] = a[j++];
 }

 while(i<=mid)
	temp[k++] = a[i++];

 while(j<=high)
	temp[k++] = a[j++];

 for(i = low ;i<= high ;i++)
	a[i] = temp[i];
}

void main()
{
 int n,i;
 clrscr();
 printf("enter no. of elements in an array : ");
 scanf("%d",&n);
 printf("enter elements in array");
 for(i = 0;i<n;i++)
	scanf("%d",&a[i]);

 merge_sort(0,n-1);

 printf("after sorting : \n");
 for(i=0;i<n;i++)
	printf("%d\n",a[i]);
 getch();
}