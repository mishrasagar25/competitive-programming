#include<stdio.h>
#include<conio.h>

int a[] = {234,123,2,123,122,4,123,234,2,345,234,4};

void quick_sort(int low, int high)
{
	int pivot;
	if(low>high)
		return;
	pivot = partition(low,high);
	quick_sort(low,pivot-1);
	quick_sort(pivot+1 , high);
}

int partition(int low , int high)
{
	int pivot = a[high];
	int i=low-1;
	int j;
	int temp;
	for(j=low;j<high;j++)
	{
	 if(a[j] <= pivot)
	 {
	   i++;
	   temp = a[i];
	   a[i] = a[j];
	   a[j] = temp;
	 }
	}

	i++;
	temp = a[i];
	a[i] = a[high];
	a[high] = temp;
	return i;
}

void main()
{
  int j,i,n,temp;
  clrscr();
  n = sizeof(a)/sizeof(a[0]);
  quick_sort(0,n-1);
  for(i=0;i<n;i++)
	printf("%d\n",a[i]);
  printf("after deleting\n");
  j=0;
  for(i=0;i<n-1;i++)
  {
     if(a[i] != a[i+1])
     {
       j++;
       a[j] = a[i+1];
     }
  }
  j++;
  a[j] = a[n-1];
  printf("%d\n",j);
  for(i=0;i<j;i++)
	printf("%d \n",a[i]);
  getch();
}