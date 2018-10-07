#include<stdio.h>
#include<conio.h>

int reverse(int num)
{
	static int rev = 0;
	if(num == 0)
		return rev;
	else
	{
		rev = (num%10) + rev*10;
		return reverse(num/10);
	}

}

void palindrome(int num)
{
	int rev = reverse(num);

	if(num ==  rev)
		printf("%d is palindrome : " ,num);
	else
		printf("%d is not palindrome",num);

}

void main()
{
 clrscr();
 palindrome(45545);
 getch();
}