#include<stdio.h>
#define Max 20

int findDecimal(int);
int power(int);
int main()
{
	int rem,dec,num,index=0;
	char arr[Max],extra;
	printf("enter binary num : ");
	scanf("%d",&num);
	while(num>0)
	{
		rem = num%10000;
		dec = findDecimal(rem);
		extra = (char)dec;
		arr[index++] = extra;
		num = num/10000;
	}	
	index--;
	while(index>=0)
	{
		printf("%c",arr[index]);
		index--;
	}
	
}

int findDecimal(int binary)
{
	int rem, decimal=0 , i=0;
	while(binary){
		rem=binary%10;
		decimal=decimal + (rem*power(i));
		binary/=10;
		i++;
	}
	if(decimal<10)
		return decimal+48;
	else
		return decimal+55;
}

int power(int i){
	int res=1, j;
	for(j=1; j<=i; j++){
		res*=2;
	}
	return res;	
}

