#include<stdio.h>

int power(int i);
int find_decimal(int);
	
int main()
{
	int num,rem,sec_rem,dec=0,i=0,oct=0,rev_oct=0;
	printf("enter binary no. to which you want to convert into decimal : ");
	scanf("%d",&num);
	
	while(num>0)
	{
		i=0;
		rem = num%1000;
		dec = find_decimal(rem);		
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

int find_decimal(int binary){
	int rem, decimal=0 , i=0;
	while(binary){
		rem=binary%10;
		decimal=decimal + (rem*power(i));
		binary/=10;
		i++;
	}
	return decimal;
}

int power(int i){
	int res=1, j;
	for(j=1; j<=i; j++){
		res*=2;
	}
	return res;	
}

