#include<stdio.h>
#include<conio.h>
static int sum;

void arm(int);
int main()
{
	int num,temp;
	printf("enter no. to check an armstrong no.");
	scanf("%d",&num);
	temp=num;

	arm(num);
	if(temp==sum)
		printf("it is an armstrong no.");
	else
		printf("it is not an armstrong no.");
}

void arm(int num)
{
	if(num==0)
		return;
	else
	{
		int rem=num%10;
		sum+=(rem*rem*rem);
		arm(num/10);
	}
}
