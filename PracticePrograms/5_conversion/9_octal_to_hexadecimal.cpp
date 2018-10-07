/*
octal->hexadecimal
steps:
octal->decimal
decimal->hexadecimal
*/

#include<stdio.h>

int power(int);
int main(){
	
	int rem,octal,decimal=0,i=0,index=0;
	char hex[20];
	printf("enter octal value : ");
	scanf("%d",&octal);
	
	while(octal)
	{
		rem = octal%10;
		decimal = decimal + (rem*power(i));
		octal = octal/10;
		i++;
	}
	
	while(decimal)
	{
		rem = decimal%16;
		if(rem<10)
			hex[index++]=(char)(rem+48);
		else
			hex[index++] = (char)(rem+55);
		decimal /= 16; 
	}
	hex[index] = '\0';
	while(index>=0)
	{
		printf("%c",hex[index]);
		index--;
	}	
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
