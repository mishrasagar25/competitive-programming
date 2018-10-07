#include<stdio.h>
#include<conio.h>

int sum(int);

int main()
{
	int n,result;
	printf("Enter no. upto which you want sum");
	scanf("%d",&n);
	result=sum(n);
	printf("sum is : %d",result);
	getch();	
}

int sum(int n)
{
	if(n==1)
		return 1;
	else
		return (n+sum(n-1));
}
