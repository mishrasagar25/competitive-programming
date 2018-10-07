//c(n,r)=n! / (r!*(n-r)!)

#include<stdio.h>
#include<conio.h>

int main()
{
	int result,i,n,r,factn=1,factr=1,diff,factd=1;
	printf("enter n : ");
	scanf("%d",&n);
	printf("enter r : ");
	scanf("%d",&r);
	
	diff=n-r;
	
	for(i=1;i<=n;i++)
	{
		factn*=i;
	}

	for(i=1;i<=r;i++)
	{
		factr*=i;
	}

	for(i=1;i<=diff;i++)
	{
		factd*=i;
	}
	
	result=(factn/(factr*factd));
	printf("ncr is : %d",result);
	getch();
}
