#include<stdio.h>
#include<conio.h>

int find_lcm(int a[] , int len)
{
	int current_lcm , i;
	for(i=0;i<=len;i++)
	{
		if(i==0)
			current_lcm = a[0];
		else
			current_lcm = lcm(a[i],current_lcm);
	}
	return current_lcm;
}

int lcm(int a ,int b)
{
	static int i=1;
	i++;
	if(a>b)
	{
		if(a%b == 0)
			return a;
		else
			return lcm(a*i,b);
	}
	else
	{
		if(b%a == 0)
			return b;
		else
			return lcm(a , b*i);
	}
}

void main()
{
 int a[] = {6,12,20};
 int length;
 clrscr();
 length = sizeof(a)/sizeof(a[0]);
 printf("%d",find_lcm(a,length-1));
 getch();
}