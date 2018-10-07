#include<stdio.h>
#include<conio.h>

int maxElement(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int find_max(int a[] , int n , int max)
{
	if(n == 0)
		return maxElement(a[n],max);
	else
	{
		max = maxElement(a[n] , max);
		return find_max(a , n-1 , max);
	}
}

void main()
{
 int a[] = {128,96,256,2,155};
 int length;
 int result;
 clrscr();
 length = sizeof(a)/sizeof(a[0]);
 result = find_max(a , length-2 , a[length-1]);
 printf("max : %d",result);
 getch();
}