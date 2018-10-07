#include<stdio.h>
#include<conio.h>

void main()
{
 int i,smallest,j,n=5;
 int a[] = {40,50,10,90,30};
 clrscr();
 for(i=0;i<n-1;i++)
 {
  smallest = a[i];
  for(j=i+1;j<n;j++)
  {
	if(a[j]<smallest)
	{
	  smallest = a[j];
	  int temp = a[i];
	  a[i] = a[j];
	  a[j]=temp;
	}
  }

 }

 for(i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
 }

 getch();
}