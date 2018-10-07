//max_heapify sort in ascending order as given below ,min_heapify sort in descending order


#include<stdio.h>
#include<conio.h>

int heap_size;

void swap(int *a , int *b)
{
 int temp = *a;
 *a = *b;
 *b = temp;
}
void max_heapify(int , int[]);
void build_heap(int a[])
{
	int i;
	for(i = (heap_size/2) ; i>=0 ;i--)
	{
		max_heapify(i,a);
	}
}

void max_heapify(int i,int a[])
{
 int left = 2*i+1;
 int right = 2*i+2;
 int largest;
 if(left<=heap_size && a[left]>a[i])
 {
     largest = left;
 }
 else
	largest =  i;

 if(right<=heap_size && a[right] > a[largest])
 {
	largest = right;
 }

 if(largest != i)
 {
	swap(&a[i] , &a[largest]);
	max_heapify(largest,a);
 }
}

void heap_sort(int a[])
{       int i;
	build_heap(a);
	for(i=heap_size ; i>0;i--)
	{
	 swap(&a[i],&a[0]);
	 heap_size = heap_size-1;
	 max_heapify(0,a);
	}
}
void main()
{ int a[] = {16,14,10,8,7,9,3,2,4,1};
  int i,n;
  clrscr();
  n = sizeof(a)/sizeof(a[0]);

  heap_size = n-1;
  for(i = 0;i<n;i++)
	printf("%d\n",a[i]);
  heap_sort(a);
  printf("after sorting : \n");
  for(i=0;i<n;i++)
	printf("%d\n",a[i]);
  getch();
}