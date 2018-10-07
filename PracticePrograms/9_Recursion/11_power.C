#include<stdio.h>
#include<conio.h>

int power(int pow,int num)
{
	if(pow == 1)
		return num;
	else
		return num*power(pow-1 , num);
}

void main()
{
 int num = 2,pow = 6;
 clrscr();
 printf("%d power %d = %d",num,pow,power(pow,num));
 getch();
}