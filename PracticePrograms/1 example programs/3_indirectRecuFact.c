#include<stdio.h>

int factn(int);

int fact(int n)
{	
	if(n==1)
		return 1;
	else
		return (n*factn(n-1));
}

int factn(int n)
{
	if(n==1)
		return 1;
	else
		return (n*fact(n-1));
}

int main()
{
	int n,f;
	printf("enter no. of which you want factorial");
	scanf("%d",&n);
    f=fact(n);
	printf("factorial of %d is : %d ",n,f);
	
}
