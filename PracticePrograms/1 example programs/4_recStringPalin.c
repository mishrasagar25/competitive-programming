#include<stdio.h>
#include<string.h>
#include<conio.h>

void palin(char [100] , int);
static count=0;
int main()
{
	char c[100];
	int chk,len,temp;
	printf("enter an string which you want to check an palindrome\n");
	gets(c);
	len=strlen(c);
	temp=len-1;
	palin(c,len-1);
	if(count!=temp)
		printf("\nit is not an palindrome");
	else
	printf("\nit is an palindrome");
	getch();
}

void palin(char c[100], int len)
{
	if(len==0)
		return;
	else
	{
		if(c[count]!=c[len])
			return;
		else
		{
			count++;
			palin(c,len-1);					
		}
	}
}
