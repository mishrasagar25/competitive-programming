#include<stdio.h>
#include<conio.h>

int main()
{
	char str[20];
	printf("enter an string : ");
	gets(str);
	int i=0;
	while(str[i])
	{
		printf("%d  ",str[i++]);
	}
}
