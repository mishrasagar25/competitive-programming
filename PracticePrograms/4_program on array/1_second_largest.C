#include<stdio.h>
#include<conio.h>
#define MIN_INT -32768
void main()
{
 int n,first,second,a[]={32,422,1,56,12},i;
 clrscr();
 n = sizeof(a)/sizeof(a[0]);
 if(n<2)
	printf("array size should be greater than or equal to 2");
 else
 {
   first = second = MIN_INT;
   for(i=0;i<n;i++)
   {
	if(first < a[i])
	{
		second = first;
		first = a[i];
	}
	else if(a[i] < first && a[i] > second)
		second = a[i];
   }

   if(second == MIN_INT)
	printf("there is no second largest element");
   else
   {
	printf("second largest element is %d : ",second);
	printf("largest element is %d : " , first);
   }
 }
 getch();
}