#include<stdio.h>
#include<conio.h>

static int rev;

void reve(int);

int main()
{
	int num,rem;
	printf("enter number : ");
	scanf("%d",&num);
	reve(num);
	printf("reversed Number : %d",rev);
}

void reve(int num)
{
	if(num==0)
		return;
	else
	{
		int rem=num%10;
		rev=rev*10+rem;
		reve(num/10);
	}
}
