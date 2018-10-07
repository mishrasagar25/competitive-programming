#include<stdio.h>
#include<conio.h>

int reverse(n)
{
	static int rev;
	if(n==0)
		return rev;
	else
	{
		rev = (n%10) + rev*10;
		return reverse(n/10);
	}
}

void main()
{
 clrscr();
 printf("%d",reverse(4321));
 getch();
}