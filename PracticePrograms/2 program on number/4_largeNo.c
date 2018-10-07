#include<stdio.h>
#include<conio.h>

int main()
{
	int i, large,n,small, temp;
	printf("enter no. of elements : ");
	scanf("%d",&n);
	printf("enter num1 : ");
	scanf("%d",&large);
	small=large;
	for(i=2;i<=n;i++)
	{
		printf("enter num%d : " ,i);
		scanf("%d",&temp);
		
		if(temp<small)
			small=temp;
		
		if(temp>large)
			large=temp;
	}
	
	printf("largest number : %d \nSmallest number : %d",large,small);
	getch();
}
