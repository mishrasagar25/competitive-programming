#include<stdio.h>
#include<conio.h>

int main()
{
	int n,sum=0,i;
	printf("Enter no. upto which you want sum : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}	
   
	printf("sum of digits are : %d ",sum);
    
	getch();	
	
}
