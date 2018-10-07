#include<stdio.h>
#include<conio.h>

int main()
{
	int num1,num2,num3;
	printf("enter first no. : ");
	scanf("%d",&num1);
	printf("enter second no. : ");
	scanf("%d",&num2);
	printf("enter third no. : ");
	scanf("%d",&num3);
	
	//method 1
	if(num1>num2 && num1>num3)
		printf("num1 is greater");
	else if(num2>num3 && num2>num1)
		printf("num2 is greater");
	else
		printf("num3 is greater");
		
	//method 2
	if(num1>num2)
	{
		if(num1>num3)
			printf("\nnum1 is greater");
		else
			printf("\nnum3 is greater");
	}
	else
	{
		if(num2>num3)
			printf("\nnum2 is greater");
		else
			printf("\nnum3 is greater");
	}
	
	//method 3
	
	printf("\n%d is greater",(num1>num2)? (num1>num3) ? num1 : num3 : (num2>num3)? num2 : num3 );
}
