#include<stdio.h>
#include<conio.h>
#define MAX_INT 32767
void main()
{
 int n,first,second,a[]={32,1412,21,32,1234,12},i;
 clrscr();
 n = sizeof(a)/sizeof(a[0]);
 if(n<2)
 {
	printf("array size must be greater than or equal to 2");
 }
 else
 {
	first=second=MAX_INT;
	for(i=0;i<n;i++)
	{
		if(first > a[i])
		{
			second = first;
			first = a[i];
		}
		else if(a[i] < second && a[i] > first)
			second = a[i];
	}

	if(second == MAX_INT)
		printf("there is no second smallest no.");
	else
	{
		printf("Second smallest : %d ", second);
		printf("\nFirst smallest : %d" ,first);
	}
 }

 getch();
}