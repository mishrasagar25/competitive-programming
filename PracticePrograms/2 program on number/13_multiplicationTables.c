#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	//printf("enter numbe");
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d * %d = %d\t",j,i,j*i);
		}
		printf("\n");
	}
	getch();
}
