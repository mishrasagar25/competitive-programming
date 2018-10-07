#include<stdio.h>


int main()
{
	int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i,j,sum=0,row=3,col=3;

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==j)
				sum += matrix[i][j];
		}
	}	
	
	printf("%d ", sum);
}
