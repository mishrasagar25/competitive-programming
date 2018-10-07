#include<stdio.h>

int power(int);
int main(){
	
	int rem,octal,decimal=0,i=0;
	printf("enter octal value : ");
	scanf("%d",&octal);
	
	while(octal)
	{
		rem = octal%10;
		decimal = decimal + (rem*power(i));
		octal = octal/10;
		i++;
	}
	
	printf("%d",decimal);
	
}

int power(int p)
{
	int result=1,j;
	for(j=1;j<=p;j++)
	{
		result *= 8;
	}
	return result;
}
