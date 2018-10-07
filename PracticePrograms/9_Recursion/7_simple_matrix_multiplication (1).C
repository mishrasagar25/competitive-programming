#include<stdio.h>
#include<conio.h>

void main()
{
 int row1,col1,row2,col2,i,j,k,sum;
 int a[10][10],b[10][10],c[10][10];

 clrscr();

 printf("enter dimension of 1st array : ");
 scanf("%d %d",&row1,&col1);
 printf("enter dimension of 2nd array : ");
 scanf("%d %d",&row2,&col2);

 printf("enter elements of array1 : " );
 for(i=0;i<row1;i++)
 {
  for(j=0;j<col1;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }

 printf("Enter elements of array2 : ");
 for(i=0;i<row2;i++)
 {
  for(j=0;j<col2;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 if(col1 == row2)
 {
	for(i=0;i<row1;i++)
	{
	 for(j=0;j<col2;j++)
	 { sum =0;
	  for(k=0;k<col1;k++) //instead of col1 we can also take row1
	  {
	    sum += a[i][k] * b[k][j];
	  }
	  c[i][j] = sum;
	 }
	}
	printf("elements in array3 after multiplication\n");

	for(i=0;i<row1;i++)
	{
	 for(j=0;j<col2;j++)
	 {
	  printf("%d \t" ,c[i][j]);
	 }
	 printf("\n");
	}
 }
 else
 {
     printf("row2 and col1 are not equal");

 }
 getch();
}