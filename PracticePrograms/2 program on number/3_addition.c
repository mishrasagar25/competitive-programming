#include<stdio.h>
#include<conio.h>

int main()
{
	int num1, num2,i,temp;
	printf("enter first number : ");
	scanf("%d",&num1);
	printf("enter second number : ");
	scanf("%d",&num2);
	temp=num1;
	
	for(i=1;i<=num2;i++)
		num1++;
	
	printf("sum of %d and %d is  : %d",temp,num2,num1);
	getch();
}
