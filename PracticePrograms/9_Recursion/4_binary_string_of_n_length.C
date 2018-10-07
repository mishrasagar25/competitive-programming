#include<stdio.h>
#include<conio.h>

void bin(int n , char a[])
{
 if(n<1)
	printf("%s\n",a);
 else
 {
	a[n-1] = '0';
	bin(n-1,a);
	a[n-1] = '1';
	bin(n-1,a);

 }
}

void main(){
 char a[11];
 clrscr();
 a[10] = '\0';
 bin(3, a);
 getch();
}