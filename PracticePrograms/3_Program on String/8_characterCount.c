#include<stdio.h>
#include<conio.h>

int str_ln(char *);

int main()
{
	char str[20];
	printf("enter an string : ");
	gets(str);
	
	int len=str_ln(str);
	printf("length of %s is : %d ",str,len);
}

int str_ln(char *p)
{
	int count=0;
	while(*p != '\0')
	{
		count++;
		p++;
	}
	
	return count;
}
