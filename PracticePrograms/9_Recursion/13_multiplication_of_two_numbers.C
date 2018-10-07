#include<stdio.h>
#include<conio.h>

int mul(int n1 ,int n2)
{
	if(n2 == 1)
		return n1;
	else
		return n1 + mul(n1 , n2-1);
}

void main()
{
 clrscr();
 printf("%d",mul(4,5));
 getch();
}

