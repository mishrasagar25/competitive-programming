#include<stdio.h>
#include<conio.h>
#include<string.h>

static int rev=0;
void palin(int);
int main()
{
	int num,temp;
	printf("enter number which you want to check palindrome");
	scanf("%d",&num);
	temp=num;
	palin(num);
	if(temp==rev)
		printf("it is an palindrome");
	else
		printf("it is not an palindrome");
	getch();
}

void palin(int n)
{
	if(n==0)
		return;
	else
	{
		int rem=n%10;
		rev=rev*10+rem;
		palin(n/10);
	}
}

