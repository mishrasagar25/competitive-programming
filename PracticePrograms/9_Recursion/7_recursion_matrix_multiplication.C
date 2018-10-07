#include<stdio.h>
#include<conio.h>

void multiply(int row1, int col1 ,int a[10][10] ,int row2 ,int col2 ,int b[10][10] ,int c[10][10])
{
  static int i=0,j=0,k=0;
  if(i>=row1)
	return;
  else
  {
	if(j < col2)
	{
		if(k < col1)
		{
			c[i][j] += a[i][k]*b[k][j];
			k++;
			multiply(row1,col1,a,row2,col2,b,c);
		}
		k=0;
		j++;
		multiply(row1,col1,a,row2,col2,b,c);
	}
	j=0;
	i++;
	multiply(row1,col1,a,row2,col2,b,c);
  }
}
void main()
{
 int i,j,k,a[10][10] ,b[10][10],c[10][10],row1 ,col1,row2,col2;
 clrscr();
 printf("enter dimension of array1 : ");
 scanf("%d",&row1);
 scanf("%d",&col1);
 printf("enter dimension of array2 : ");
 scanf("%d",&row2);
 scanf("%d",&col2);

 printf("enter elements of array 1 : ");
 for(i=0;i<row1;i++)
 {
  for(j=0;j<col1;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("enter elements of array2 : ");
 for(i=0;i<row2;i++)
 {
  for(j=0;j<col2;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }

 for(i=0;i<row1;i++)
 {
  for(j=0;j<col2;j++)
  {
   c[i][j]=0;
  }
 }

 if(col1 == row2)
 {
	multiply(row1 , col1 , a , row2 , col2 , b , c);
	printf("elements of array3 : \n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
			printf("%d\t",c[i][j]);

		printf("\n");
	}

 }
 else
	printf("col1 and row2 are not same");

 getch();
}


