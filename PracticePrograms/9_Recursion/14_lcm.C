#include<stdio.h>
#include<conio.h>

int lcm(int a, int b)
{
  static int i = 2;
  i++;
  if(a>b)
  {
	if(a%b == 0)
		return a;
	else
		return lcm(a*i , b);
  }
  else
  {
      if(b%a == 0)
	return b;
      else
	return lcm(a,b*i);
  }
}

void main()
{
 clrscr();
 printf("%d",lcm(12,20));
 getch();
}