#include<stdio.h>
#include<conio.h>

int main()
{
	char s[30];
	int i=0;
	printf("enter name : ");
	gets(s);
	printf("%c",s[i]);
	while(s[i]!='\0')
	{	
		i++;
		if(s[i]==' ')
		{
			i++;
			printf(" , %c",s[i]);
		}
	}
	getch();
}
