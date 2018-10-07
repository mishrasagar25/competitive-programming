#include<stdio.h>
int main()
{
	int rem,decimal,temp=0,index=0;
	char octal[20];
	printf("enter decimal number : ");
	scanf("%d",&decimal);
	
	while(decimal)
	{
		rem = decimal%8;
		octal[index++]=(char)(rem+48);
		decimal /= 8; 
	}
	octal[index] = '\0';
	while(index>=0)
	{
		printf("%c",octal[index]);
		index--;
	}
	
}
