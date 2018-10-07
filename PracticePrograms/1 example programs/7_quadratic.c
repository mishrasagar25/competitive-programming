#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float a,b,c,determinant,r1,r2,real,imag;
	
	printf("Enter coefficients of a,b and c:");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);	
	determinant=(b*b)-(4*a*c);
	if(determinant>0)
	{
		r1=(-b+sqrt(determinant))/(2*a);
		r2=(-b-sqrt(determinant))/(2*a);
		printf("roots are: %.2f and %.2f",r1,r2);
	}
	else if(determinant==0)
	{
		r1=r2=-b/(2*a);
		printf("roots are: %.2f and %.2f",r1,r2);
	}
	else
	{
		real=-b/(2*a);
		imag=sqrt(-determinant)/(2*a);
		printf("roots are: %.2f+%.2fi and %.2f-%.2fi", real,imag, real, imag);
	}
	getch();
}
