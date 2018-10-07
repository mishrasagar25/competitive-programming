#include<stdio.h>
#include<conio.h>
#define max 20

int a[max];
void swap(int *a ,int *b)
{
 int temp = *a;
 *a = *b;
 *b = temp;
}

int partition(int , int);
void quick_sort(int low ,int high)
{
 int pivot;
 if(low<high)
 {
   pivot = partition(low,high);
   quick_sort(low ,pivot-1);
   quick_sort(pivot+1 , high);
 }
}

int partition(int low , int high)
{
  int j;
  int x = a[high];
  int i = low-1;

  for(j=low;j<high;j++)
  {
	if(a[j] <= x)
	{
		i++;
		swap(&a[i] , &a[j]);
	}
  }

  i++;
  swap(&a[i] , &a[high]);
  return i;
}

void main()
{
 int n,i;
 clrscr();
 printf("enter no. of elements of array : ");
 scanf("%d",&n);
 printf("enter elements of array : \n");
 for(i=0;i<n;i++)
	scanf("%d\n",&a[i]);
 quick_sort(0,n-1);
 printf("after sortiong :\n ");
 for(i=0;i<n;i++)
	printf("%d\n",a[i]);
 getch();
}