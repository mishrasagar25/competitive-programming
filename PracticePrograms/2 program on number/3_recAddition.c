#include<stdio.h>
#include<conio.h>

static int result=1;
void add(int , int);

int main()
{
	int num1,num2,temp;
	printf("enter first number : ");
	scanf("%d",&num1);
	printf("enter second number : ");
	scanf("%d",&num2);
	temp=num1;
	add(num1,num2);
	printf("addition of %d and %d is : %d",temp,num2,result);
}

void add(int num1 , int num2)
{
	if(num2==0)
		return;
	else
	{	
		num1+=result;
		result++;
		add(num1,num2-1);
	}
}
