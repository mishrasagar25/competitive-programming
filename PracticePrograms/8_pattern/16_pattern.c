/*
pattern 15:


    1
   12
  123
 1234
12345
 1234
  123
   12
    1
*/

#include<stdio.h>

int main()
{
	int i,j,k=0,p;
	for(i=1;i<=9;i++)
	{	
		i<6?k++:k--;
		p=1;
		for(j=1;j<=5;j++)
		{
			if(j>= 6-k)
			{
				printf("%d",p);
				p++;
			}	
			else
				printf(" ");
			
		}
		printf("\n");
	}
}
