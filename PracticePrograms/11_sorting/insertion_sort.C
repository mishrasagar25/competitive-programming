#include<stdio.h>
#include<conio.h>

void swap(int *a , int *b)
{
  int temp = *a;
  *a = *b;
  *b =temp;
}

void main()
{
 int a[] ={10,50,6,3,60};
 int i, j, n;
 clrscr();
 n = sizeof(a)/sizeo	f(a[0]);
 for(i=0;i<n;i++)
	printf("%d\n",a[i]);

 for(i=1;i<n;i++)
 {
	for(j=0 ; j<= i-1 ; j++)
	{
		if(a[j]>a[i])
			swap(&a[i],&a[j]);
	}
 }

 printf("\nafter sorting : \n");
 for(i=0;i<n;i++)
	printf("%d\n",a[i]);
 getch();
}