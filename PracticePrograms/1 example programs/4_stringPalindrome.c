#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{	char c[100];
	int i;
	printf("enter string which you want to check palindrome\n");
	gets(c); //we can also use scanf("%s",c); 
	//puts(c);//we can also use printf("%s",c);
	int len=strlen(c);
	//printf("%d",len);
	int flag=0;
	for(i=0;i<len/2;i++)
	{
		if(c[i]!=c[len-i-1])
		{
			flag=1;
			break;		
		}
	}
	if(flag==0)
		printf("\nit is an palindrome");
	else
		printf("\nit is not an palindrome");

	getch();
}
