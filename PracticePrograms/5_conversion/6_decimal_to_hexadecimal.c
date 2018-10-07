#include<stdio.h>

int main()
{
	int rem,decimal,temp=0,index=0;
	char hex[20];
	printf("enter decimal number : ");
	scanf("%d",&decimal);
	
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
