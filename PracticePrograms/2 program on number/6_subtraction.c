#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num1,num2,temp;
	printf("enter first no. : ");
	scanf("%d",&num1);
	printf("enter second no. : ");
	scanf("%d",&num2);
	
	temp=num1;
	
	for(i=0;i<num2;i++)
		temp--;
	
	printf("%d - %d = %d",num1,num2,temp);
}
