#include<stdio.h>
#include<conio.h>

int main()
{
	int num,temp,rem,sum=0;
	printf("enter no. you want to check amstrong no. \n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum+=(rem*rem*rem);
		num=num/10;
	}

	if(temp==sum)
		printf("\nit is an armstrong no.");
	else
		printf("\nit is not an armstrong no.");
	
	getch();
}
