#include<stdio.h>
#include<conio.h>

int main()
{
	int yr;
	printf("enter an year : ");
	scanf("%d",&yr);
	
	if(yr%4==0 || yr%400==0)
		printf("this year is an leap year");
	else
		printf("this year is not an leap year");
	
	getch();
}
