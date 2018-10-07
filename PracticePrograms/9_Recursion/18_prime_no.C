#include<stdio.h>
#include<conio.h>

int floor_sqrt(int num)
{
	int i=1,result=1;
	if(num == 0 || num==1)
		return num;

	while(result <	num)
	{
		if(result == num)
			return result;
		i++;
		result = i*i;
	}
	return i-1;
}

int prime(int num)
{       static int n = 1;
	int sqrt = floor_sqrt(num);
	++n;
	if(n > sqrt)
		return 1;
	else if(num % n == 0)
		return 0;
	else
	{

		return prime(num);
	}

}

void main()
{
 int p;
 clrscr();
 p = prime(37);
 if(p == 1)
	printf("prime");
 else
	printf("not a prime");
 getch();
}

