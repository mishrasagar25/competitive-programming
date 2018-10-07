//program of greatest common divisor

#include<stdio.h>
#include<conio.h>
static c;
int gcd(int a , int b)
{  c++;
 if(a == b)     //here both is same so anyone can be gcd
	return a;
 if(a%b == 0)   //here b is smaller therefore it is reqd. gcd
	return b;
 if(b%a == 0)
	return a;
 if(a>b)
	return (gcd(a%b,b));
 else
	return (gcd(a,b%a));

}

void main(){
	int a;
	clrscr();
	a = gcd(3,97);
	printf("%d\n%d",a,c);
	getch();
}