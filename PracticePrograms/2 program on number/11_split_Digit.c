#include<stdio.h>
#include<conio.h>

int main()
{
	int i,x[20],n=0,temp,num;
	printf("Enter number : ");
	scanf("%d",&num);
	temp=num;
	
	while(num!=0)
	{
		x[n++]=num%10;
		num=num/10;
	}
	
	printf("splitted number : ");
	for(i=0;i<n;i++)
		printf("%d , ",x[i]);
}
