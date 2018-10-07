#include<stdio.h>
#include<conio.h>
#include<string.h>

static int len1,len2,len;
void con(char [] , char [] , char [] , int);
int main()
{
	char s1[100],s2[100];
	printf("enter first string : ");
	gets(s1);
	printf("enter second string : ");
	gets(s2);
	
	int i=0;
	len1=strlen(s1);
	len2=strlen(s2);
	len=len1+len2;
	char s[len];
	con(s1,s2,s,i);
	puts("after concatenate of string :");
	puts(s);
}

void con(char s1[len1],char s2[len2], char s[len],int i)
{
	if(i==len)
		return;
	else
	{
		if(i<len1)
			s[i]=s1[i];
		else
			s[i]=s2[i-len1];
			
		con(s1,s2,s,i+1);
	}
}
