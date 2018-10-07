#include<stdio.h>
#include<conio.h>

int main()
{
	int num,sum,rem;
	printf("enter number : ");
	scanf("%d",&num);
	int temp=num;
	while(num>10)
	{
		sum=0;
		while(num)
		{
			rem=num%10;
			sum+=rem;
			if(num>10)
			   printf("%d + ",rem);
			else
				printf("%d",rem);
			
			num=num/10;
		}
			printf(" = %d \n",sum);
		
		if(sum>10)
			num=sum;
		else
			break;
	}
	
	if(temp<10)
		printf("Generic root is %d",num);
	else
		printf("Generic root is %d",sum);
}
