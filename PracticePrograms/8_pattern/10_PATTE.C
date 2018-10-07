/*
pattern : 10
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,k;
 clrscr();

 for(i=1;i<=7;i++)
 {
	for(j=1;j<=7;j++)
	{
		if(i<=4)
		{
		  if(j>=(5-i) && j<=(3+i))
			printf("*");
		  else
			printf(" ");
		}
		else
		{
		  if(j>=(i-3) && j<=(11-i))
			printf("*");
		  else
			printf(" ");
		}
	}
	printf("\n");
 }

 getch();
}