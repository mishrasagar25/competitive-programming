//perfect number is that positive number which is equal to sum of its proper divisor (ex-: 6=1+2+3)

#include<stdio.h>
#include<conio.h>

int main()
{
	int num,i,sum=0;
	printf("enter number which you want to check for perfect number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
	}
	
	if(sum==num)
		printf("%d is an perfect number",num);
	else
		printf("%d is not an perfect number",num);
}
