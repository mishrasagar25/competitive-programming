#include<stdio.h>
#include<conio.h>

static int m,l;
void pf(int,int[],int, int[]);

int main()
{
	int num,i,j,k=0;
	printf("enter number : ");
	scanf("%d",&num);
	int prime[num],factor[num];
	for(i=2;i<num;i++)
	{
		int flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
				flag=1;
		}
		if(flag==0)
		{
			if(num%i==0)
			{
				prime[k++]=i;
			}
		}
	}
	//printf("\n%d\n",k);
	
	
	pf(num,prime,k,factor);
	
	printf("Prime factor of %d : ",num);
	for(i=0;i<l;i++)
		printf("%d, ",factor[i]);
	
	getch();
}

void pf(int n, int prime[] , int k , int factor[])
{
	if(n==1)
		return;
	else
	{	if(m==k)
			m=0;	
		
		if(n%prime[m]==0)
		{
			n=n/prime[m];
			factor[l++]=prime[m];
		}
		else 
			m++;
		
		pf(n,prime,k,factor);		
	}
}



