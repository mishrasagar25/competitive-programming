#include<stdio.h>
#include<conio.h>
#include<string.h>

void revf(char[] ,char[] ,int , int);
int main()
{
	char c[100],rev[100];
	int len,i=0;
	printf("enter string \n");
	gets(c);
	len=strlen(c);
	revf(c,rev,len-1,i);
	puts(rev);
	getch();
}


void revf(char c[100],char rev[100],int len, int i)
{
	if(len<0)
		return;
	else
	{
		rev[i]=c[len];
		revf(c,rev,len-1,i+1);
	}
		
}

