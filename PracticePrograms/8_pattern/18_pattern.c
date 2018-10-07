/*
pattern 17:

*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********
*/

#include<stdio.h>

int main(){
	int i,j,k=6,p=4;
	
	for(i=1;i<=9;i++)
	{
		i<=5?k--:k++;
		i<=5?p++:p--;
		for(j=1;j<=9;j++)
		{
			if(j<=k || j>=p)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
