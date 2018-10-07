#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter first string : ");
	gets(str1);
	printf("enter second string : ");
	gets(str2);
	
	int len1=strlen(str1);
	int len2=strlen(str2);
	int len=len1+len2;
	int i=len1,k=0;
	while(i<len)
	{
		str1[i++]=str2[k++];
	}
	printf("after concatenate of string : ");
	puts(str1);
}
