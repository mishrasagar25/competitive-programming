#include<stdio.h>


int main()
{
	int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i,j,row=3,col=3;

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(j<i)
				matrix[i][j]=0;
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}	
}
