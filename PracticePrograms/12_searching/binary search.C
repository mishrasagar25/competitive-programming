#include<stdio.h>
#include<conio.h>

int binarySearch(int a[] , int low ,int high , int data)
{
	int mid;
	if(low > high)
		return -1;
	mid = (low+high)/2;
	if(data == a[mid])
	{
		return mid;
	}
	else if(data > a[mid])
		return binarySearch(a , mid+1 , high ,data);
	else
		return binarySearch(a , low , mid-1 , data);
}

void main()
{
 int low,high,flag,index,a[50],i,j,n,temp,mid,data;
 clrscr();
 printf("enter no. of elements of array : ");
 scanf("%d",&n);
 printf("enter the elements of array : \n");
 for(i=0;i<n;i++)
	scanf("%d",&a[i]);

 for(i=0;i<n;i++)
 {      flag = 0;
	for(j=0;j<n-1-i;j++)
	{
		if(a[j] > a[j+1])
		{
		 flag=1;
		 temp = a[j];
		 a[j] = a[j+1];
		 a[j+1] = temp;
		}
	}
	if(flag == 0)
		break;
 }
 printf("after sorting : \n");
 for(i=0;i<n;i++)
	printf("%d\n",a[i]);

 printf("enter the element to search : ");
 scanf("%d",&data);
/*
 //code for recursion binary search
 index = binarySearch(a,0,n-1,data);
 if(index != -1)
	printf("element found at : %d",index+1);
 else
	printf("element not found");
 */

 //code for iterative binary search

 low = 0 ,high = n-1,flag = 0;
 while(low <= high)
 {
   mid = (low + high)/2;
   if(data == a[mid])
   {
	printf("data found at location : %d",mid+1);
	break;
   }
   else if(data > a[mid])
	low = mid+1;
   else
	high = mid-1;
}

 if(low>high)
	printf("data not found");

 getch();
}