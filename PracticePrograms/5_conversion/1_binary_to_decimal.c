#include<stdio.h>


int main()
{
	int num,rem,result=0,i=0;
	int pow(int , int);
	printf("enter binary no. to which you want to convert into decimal : ");
	scanf("%d",&num);
	while(num>0)
	{
		rem = num%10;
		result += (rem*pow(2,i));
		i++;
		num = num/10;
	}
	printf("result  : %d ",result);
}

int pow(int num , int p)
{	
	int i,result=1;
	if(p==0)
		return 1;
	else
	{
		for(i=0;i<p;i++)
		{
			result *= 2;
		}
	}
	return result;
}
