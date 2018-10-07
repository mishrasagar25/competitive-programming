#include<stdio.h>
#include<conio.h>

int sum(int n)
{
	if(n == 0)
		return 0;
	else
	{
	       return (n%10)+sum(n/10);
	}
}

void main()
{
 int num =543;
 clrscr();
 printf("sum of digits of %d is : %d",num,sum(543));
 getch();
}