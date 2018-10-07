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
 int a[] = {6,66,7,89,1};
 int i,j,n,temp,flag;
 clrscr();
 n = sizeof(a)/sizeof(a[0]);

 for(i=0;i<n;i++)
 {
	printf("%d\n",a[i]);
 }
 for(i=0;i<n;i++)
 {      flag = 0 ;
  for(j=0;j<n-1-i;j++)
  {
   if(a[j]>a[j+1])
   {        flag = 1;
	swap(&a[j],&a[j+1]);
   }
  }
   if(flag == 0)
	break;
 }
 printf("after sorting\n");
 for(i=0;i<n;i++)
	printf("%d\n",a[i]);

 getch();
}

