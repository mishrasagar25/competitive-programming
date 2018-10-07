#include<stdio.h>
#include<conio.h>

int main()
{
	char s[30],str[30];
	int i=0,j=0;
	printf("Enter an string : ");
	gets(s);
	
	while(s[i]!='\0')
	{
		if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
		{
			s[i]=' ';
		}
		else
			str[j++]=s[i];
			
		i++;		
	}
	
	str[j]='\0';
	printf("String after deletion of consonant : ");
	puts(str);
	
}
