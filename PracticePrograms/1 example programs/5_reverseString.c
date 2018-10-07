#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char c[100],rev[100];
	int i;
	printf("enter an string which you want to reverse \n");
	gets(c);
	int len = strlen(c);
	for(i=0;i<len;i++)
	{
		rev[i]=c[len-i-1];
	}
	puts(rev);
	/* we can also print reverse string like this also
	for(i=len-1;i>=0;i--)
	{
		printf("%c",c[i]);
	}
	*/
	getch();
}
