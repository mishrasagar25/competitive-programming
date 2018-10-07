#include<stdio.h>

int pow(int , int);
int findDecimal(int);
	
int main()
{
	int num,rem,sec_rem,dec=0,i=0,oct=0,rev_oct=0;
	printf("enter binary no. to which you want to convert into decimal : ");
	scanf("%d",&num);
	
	while(num>0)
	{
		i=0;
		rem = num%1000;
		dec = findDecimal(rem);
		oct = oct*10+dec;
		num = num/1000;
	}
	
	while(oct>0)
	{
		rem = oct%10;
		rev_oct = rev_oct*10 + rem;
		oct = oct/10;
	}
	printf("result : %d",rev_oct);

}

int findDecimal(int num)
{
	int rem,dec,i=0;
	while(num>0)
		{
			rem = num%10;
			dec += (rem*pow(2,i));
			i++;
			num = num/10;
		}
	return dec;
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
