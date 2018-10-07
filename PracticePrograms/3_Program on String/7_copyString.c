#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[20],s[20];
	int i=0;
	printf("enter string : ");
	gets(str);
	int len=strlen(str);
	while(len>i)
	{
		s[i]=str[i];
		i++;
	}
	s[i]='\0';
	printf("after copy of string : ");
	printf("%s",s);

}
