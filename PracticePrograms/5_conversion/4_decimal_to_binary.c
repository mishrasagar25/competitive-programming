#include<stdio.h>

int main()
{
	int rem,decimal,temp=0,index=0;
	int binary[20];
	printf("enter decimal number : ");
	scanf("%d",&decimal);
	
	while(decimal)
	{
		rem = decimal%2;
		binary[index++]=rem; //to stroe character value of 0 and 1 bcz 0 is not shown
		decimal /= 2; 
	}
	binary[index] = '\0';
	while(index>=0)
	{
		printf("%d",binary[index]);
		index--;
	}
	
}
