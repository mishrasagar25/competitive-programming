#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s1[100],s2[100];
	printf("enter first string\n");
	gets(s1);
	printf("enter second string\n");
	gets(s2);
	int len1,len2,len,i;
	len1=strlen(s1);
	len2=strlen(s2);
	len=len1+len2;
	char s[len];
	for(i=0;i<len;i++)
	{
		if(i<len1)
			s[i]=s1[i];
		else
			s[i]=s2[i-len1];
	}
	puts("after concatenate of string");
	puts(s);
	getch();
}
