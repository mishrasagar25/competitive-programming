//the number is called strong number if the sum of factorial of its digit is equals to number itself is called strong number

#include<stdio.h>
#include<conio.h>

int main()
{
	int num,temp,i,sum=0,rem;
	
	printf("enter number : ");
	scanf("%d",&num);
	temp=num;

	while(num!=0)
	{	
		int fact=1;
		rem=num%10;
		
		for(i=1;i<=rem;i++)
		{
			fact*=i;	
		}	
		
		sum+=fact;
		num=num/10;		
	}

	if(sum==temp)
		printf("%d is an strong number",temp);
	else
		printf("%d is not an strong number",temp);
	
	getch();
}
