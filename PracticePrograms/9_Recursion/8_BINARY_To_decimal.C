#include<stdio.h>
#include<conio.h>

void binary(int n)
{
	if(n==0 || n==1)
		printf("%d",n);
	else
	{
		binary(n/2);
		printf("%d",n%2);

	}

}

void main()
{
	int n;
	clrscr();
	printf("enter number which have to convert from decimal to binary : ");
	scanf("%d",&n);
	binary(n);
	getch();

	getch();
}