#include<stdio.h>
#include<conio.h>

int main()
{
	int num,power,i,result;
	printf("enter number : ");
	scanf("%d",&num);
	printf("enter power : ");
	scanf("%d",&power);
	
	for(i=2;i<=power;i++)
	{
		result*=num;
	}
	
	printf("result is : %d",result);
	getch();
}
