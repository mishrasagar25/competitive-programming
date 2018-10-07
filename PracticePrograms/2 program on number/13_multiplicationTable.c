#include<stdio.h>
#include<conio.h>

int main()
{
	int num,m,i;
	printf("enter number of which you want table : ");
	scanf("%d",&num);
	printf("enter number upto which you want table : ");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		printf("%d * %d = %d \n",num,m,num*i);
	}
	getch();
}
