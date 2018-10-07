#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[10];
	int i=0;
	printf("enter an string : ");
	gets(s);
	int len=strlen(s);
	while(len>0)
	{
		int num=s[i];
		if(num>=65 && num<=90)
		{
			num=num+32;	
		}
		else if(num>=97 && num<=122)
		{
			num=num-32;	
		}	
		s[i]=num;
		i++;
		len--;
	}
	printf("%s",s);
	//puts(s);
}
