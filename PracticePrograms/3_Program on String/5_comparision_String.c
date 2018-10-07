#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[20],str2[20];
	printf("enter first string : ");
	gets(str);
	printf("enter second string : ");
	gets(str2);
	int i=0;
	int len1=strlen(str);
	int len2=strlen(str2);
	int flag=0;
	if(len1==len2)
	{
	
		while(len1>i)
		{
			if(str[i] != str[i])
			{
				flag=1;
				break;
				
			}
			i++;
		}
		
		if(flag==0)
			printf("strings are equal");
		else
			printf("strings are not equal");
	}
	else
		printf("Strings are not equal");
		
	getch();
}
