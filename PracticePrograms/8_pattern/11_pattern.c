/*

   *
  * *
 * * *
* * * *

this pattern is useful for pascal triangle i.e shape is same only replace numbers with *

*/

#include<stdio.h>

int main()
{
	int line,k,i,j;
	printf("enter no. of row : ");
	scanf("%d",&line);
	
	/*
	for(i=1;i<=4;i++)
	{	
		k=1;
		for(j=1;j<=7;j++)
		{
			if(j>=5-i && j<=3+i && k)
			{
				printf("*");
				k=0;
			}
			else
			{
				printf(" ");
				k=1;
			}
		}
		printf("\n");		
	}
	
	*/
	
	//generalized code
	
	for(i=1;i<=line;i++)
	{
		k=1;
		for(j=1;j<=2*line-1;j++)
		{
			if(j>=line+1-i && j<=line-1+i &&k)
			{
				printf("*");
				k=0;
			}
			else
			{
				printf(" ");
				k=1;
			}
		}
		printf("\n");
	}
}
