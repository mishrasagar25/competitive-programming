#include<stdio.h>
#include<conio.h>

void find_gcd(int a[],int n)
{
	int current_gcd,i;
	for(i=0;i<=n;i++)
	{
		if(i==0)
			current_gcd = a[0];
		else
			current_gcd = gcd(a[i] , current_gcd);
	}

	printf("required GCD : %d",current_gcd);
}

int gcd(int a , int b)
{
   if(a == b)
	return a;
   if(a%b == 0)
	return b;
   if(b%a == 0)
	return a;
   if(a>b)
	return gcd(a%b,b);
   else
	return gcd(b,b%a);
}

void main()
{

 int a[] = {34 ,86,128 ,78,456};
 int length;
 clrscr();
 length = sizeof(a)/sizeof(a[0]);
 find_gcd(a,length-1);
 getch();

}