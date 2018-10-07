/*

octal -> binary
steps:
Step 1 - Convert each octal digit to a 3-digit binary number (the octal digits may be treated as decimal for this conversion).

Step 2 - Combine all the resulting binary groups (of 3 digits each) into a single binary number.

*/

#include<stdio.h>
void findBinary(int);
char temp[3];
int main()
{
	int no=0,index=0,index1=0,k=0,octal,i,j,temp[40],rem,index2=0;
	char binary[40],final[40];
	printf("enter octal value : ");
	scanf("%d",&octal);

	while(octal)
	{	
	    no++;
	    index=0;
		rem = octal%10;
		octal /=10;
	    while(rem)
	    {	
	    	temp[index1++]=(char) rem%2+48;
	    	rem/=2;
	    	index++;
		}
		while(index<=2)
		{
			temp[index1++] = (char)48;
			index++;
		}
	}
	
	for(i=no;i>0;i--)
	{
		for(j=3*i-1,k=1;k<=3;k++,j--)
		{
			binary[index2++] = temp[j];
		}
	}
	
	for(i=0;i<index2;i++)
	{
		printf("%c",binary[i]);
	}
	
}

