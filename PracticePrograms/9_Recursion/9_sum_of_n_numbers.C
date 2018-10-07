#include<stdio.h>
#include<conio.h>

int sum(int n)
{
 if(n==0)
	return 0;
 else
	return n+sum(n-1);
}

void main()
{
 clrscr();
 printf("%d",sum(10));
 getch();
}