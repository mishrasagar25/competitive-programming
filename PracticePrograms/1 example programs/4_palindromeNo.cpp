#include<stdio>

int main()
{
	int n,temp,rem,rev=0;
	printf("enter no. which has to check for palindrome");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d",rev);
}
