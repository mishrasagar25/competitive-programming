#include<stdio.h>
#include<conio.h>

int main()
{
	int num1,num2,i,j,len;
	char s[20];
	printf("enter an string : ");
	gets(s);	
	len=strlen(s);
	for(i=0;i<len;i++)
	{

		for(j=0;j<len-1-i;j++)
		{
			
			if(s[j+1]<s[j])
			{
				char temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
			
		}
	}
	
	puts(s);
}
