#include<stdio.h>
#include<conio.h>

int pow(int , int);

int main()
{
	int num,power,result;
	printf("enter number : ");
	scanf("%d",&num);
	printf("enter power : ");
	scanf("%d",&power);
	result=pow(num,power);
	printf("result is : %d",result);
	getch();
}

int pow(int num , int power)
{
	if(power==0)
		return 1;
	else
		return (num * pow(num,power-1));
}
